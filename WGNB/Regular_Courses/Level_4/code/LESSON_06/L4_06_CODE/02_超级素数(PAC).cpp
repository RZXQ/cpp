#include<bits/stdc++.h>
using namespace std;
//a数组标记，b数组存储质数，num质数数量
bool a[100000010];
int b[6000000], num, ans;
//欧拉筛
void prime(int n) {
    for (int i = 2; i <= n; i++) {
        //保存质数
        if (a[i] == 0) {
            b[num++] = i;
            int tmp = i;
            while (tmp) {
                tmp /= 10;
                if (tmp == 0) {
                    ans++;
                    break;
                }
                if (a[tmp] != 0) break;
            }
        }
        //遍历现有质数
        for (int j = 0; j < num; j++) {
            //合数超过最大范围
            if (i * b[j] > n) break;
            //标记合数
            a[i * b[j]] = 1;
            //后续质数不是合数的最小质因子
            if (i % b[j] == 0) break;
        }
    }
    return;
}

int main() {
    a[0] = 1, a[1] = 1;
    int n;
    cin >> n;
    prime(n);
    cout << ans << endl;
    return 0;
}
