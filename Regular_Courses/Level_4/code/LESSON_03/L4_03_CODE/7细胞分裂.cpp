#include<bits/stdc++.h>
using namespace std;
const int N = 10010, M = 30010, inf = 0x3f3f3f3f;
int n, m1, m2, s[N], prime[M], num_m[M], num_s[M], ans = inf;

int main() {
    cin >> n >> m1 >> m2;
    //m1分解质因数
    int k = 0;
    for (int i = 2; i * i <= m1; i++) {
        if (m1 % i == 0) {
            prime[++k] = i;
            while (m1 % i == 0) {
                m1 /= i;
                num_m[k]++;
            }
        }
    }
    if (m1 != 1) prime[++k] = m1, num_m[k] = 1;
    //用m2修正质因数数量
    for (int i = 1; i <= k; i++) {
        num_m[i] *= m2;
    }
    //处理细胞
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        bool flag = 0;
        for (int j = 1; j <= k; j++) {
            if (s[i] % prime[j]) flag = 1;
        }
        if (flag) continue;
        memset(num_s, 0, sizeof(num_s));
        //获取细胞与容器相同的质因数数量
        for (int j = 1; j <= k; j++) {
            while (s[i] % prime[j] == 0) {
                s[i] /= prime[j];
                num_s[j]++;
            }
        }
        int temp = 0;
        //计算细胞的分裂次数
        for (int j = 1; j <= k; j++) {
            if (num_m[j] > num_s[j]) {
                //temp=max(temp,num_m[j]%num_s[j]?num_m[j]/num_s[j]+1:num_m[j]/num_s[j]);
                temp = max(temp, (int) ceil(1.0 * num_m[j] / num_s[j]));
            }
        }
        ans = min(ans, temp);
    }
    if (ans == inf) cout << -1;
    else cout << ans;
    return 0;
}
