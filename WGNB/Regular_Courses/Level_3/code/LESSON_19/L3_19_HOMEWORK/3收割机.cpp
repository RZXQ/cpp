#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[35][35] = {}, n = 0, m = 0;
    //输入
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    //需要从下往上求
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= m; j++) {
            //比较左侧和下方的两个元素选较大加当前元素
            a[i][j] = max(a[i][j - 1], a[i + 1][j]) + a[i][j];
        }
    }
    //输出最右上角元素
    cout << a[1][m];
    return 0;
}
