#include<bits/stdc++.h>
using namespace std;
int a[500001], s[500001];

int main() {
    int n, m;
    long long sum_t = 0, sum_c = 0;
    int L, R;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i]; //计算前缀和
    }
    for (int i = 1; i <= m; i++) {
        cin >> L >> R;
        sum_t = sum_t + (s[R] - s[L - 1]); //用前缀和计算范围纸牌总和；并累加
    }
    for (int i = 1; i <= m; i++) {
        cin >> L >> R;
        sum_c = sum_c + (s[R] - s[L - 1]); //用前缀和计算范围纸牌总和；并累加
    }
    if (sum_t > sum_c) {
        //小童m轮纸牌总数大
        cout << 'T';
    } else if (sum_t < sum_c) {
        //小程m轮纸牌总数大
        cout << 'C';
    } else {
        //平局
        cout << 'D';
    }
    return 0;
}
