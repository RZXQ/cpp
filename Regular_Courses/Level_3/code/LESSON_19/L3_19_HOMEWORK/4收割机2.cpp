#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[35][35] = {}, b[35][35] = {}, n = 0, m = 0;
    //输入
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    //A收割机最多收割产量
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            //比较左侧和上方的两个元素选较大加当前元素
            a[i][j] = max(a[i][j - 1], a[i - 1][j]) + a[i][j];
        }
    }
    //B收割机最多收割产量
    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= 1; j--) {
            //比较右侧和上方的两个元素选较大加当前元素
            b[i][j] = max(b[i][j + 1], b[i - 1][j]) + b[i][j];
        }
    }
    //输出最右下角元素及最左下角元素
    cout << a[n][m] << " " << b[n][1];
    return 0;
}
