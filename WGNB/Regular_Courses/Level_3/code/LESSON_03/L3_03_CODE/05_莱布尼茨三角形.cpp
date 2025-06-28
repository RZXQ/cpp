#include<bits/stdc++.h>
using namespace std;
long long a[31][31];
int n, m;

int main() {
    cin >> n >> m;
    //存储初始条件
    for (int i = 1; i <= n; i++) {
        a[i][1] = i;
    }
    //递推计算分母值
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= i; j++) {
            a[i][j] = a[i - 1][j - 1] * a[i][j - 1] / (a[i][j - 1] - a[i - 1][j - 1]);
        }
    }
    //输出分数
    cout << "1/" << a[n][m];
    return 0;
}
