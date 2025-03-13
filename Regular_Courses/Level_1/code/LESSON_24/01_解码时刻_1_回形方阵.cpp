#include<bits/stdc++.h>
using namespace std;
int a[51][51];

int main() {
    int n;
    cin >> n;
    for (int p = 1; p <= (n + 1) / 2; p++) {
        for (int j = p; j <= n + 1 - p; j++) {
            a[p][j] = p; //上
            a[n + 1 - p][j] = p; //下
        }
        for (int i = p; i <= n + 1 - p; i++) {
            a[i][p] = p; //左
            a[i][n + 1 - p] = p; //右
        }
    }
    //输出结果
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
