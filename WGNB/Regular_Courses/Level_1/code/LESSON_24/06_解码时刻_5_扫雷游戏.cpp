#include<bits/stdc++.h>
using namespace std;
int a[105][105];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char c;
            cin >> c;
            //将字符转换成数字，方便后续计算
            if (c == '*') a[i][j] = 1;
            else a[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 1) cout << '*';
            else {
                //上方3个格子中的地雷数
                int tot = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1];
                //当前行左右两个格子的地雷数
                tot += a[i][j - 1] + a[i][j + 1];
                //下方3个格子中的地雷数
                tot += a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
                cout << tot;
            }
        }
        cout << endl; //处理完一行，要换行
    }
    return 0;
}
