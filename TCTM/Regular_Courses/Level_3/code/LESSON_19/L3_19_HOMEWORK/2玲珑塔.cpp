#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[35][35] = {}, n = 0;
    //输入
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    //求每个阶段的最优解
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            a[i][j] = min(a[i + 1][j], a[i + 1][j + 1]) + a[i][j];
    }
    cout << a[1][1];
    return 0;
}
