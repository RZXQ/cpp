#include<bits/stdc++.h>
using namespace std;
long long a[21][21]; //存储路径数
int n, m; //n行m列的网格
int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        a[1][i] = 1; //第一行只有1种走法 
    }
    for (int j = 1; j <= n; j++) {
        a[j][1] = 1; //第一列只有1种走法
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }
    cout << a[n][m] << endl;
}
