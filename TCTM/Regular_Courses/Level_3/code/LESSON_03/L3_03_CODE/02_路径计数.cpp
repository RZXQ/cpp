#include<bits/stdc++.h>
using namespace std;
long long a[1001][1001];

int main() {
    int n, m; //n*n的网格 m个障碍物
    cin >> n >> m;
    int x, y; //(x,y)是障碍物
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        a[x][y] = -1;
    }
    for (int j = 1; j <= n; j++) {
        //第1行
        if (a[1][j] != -1) a[1][j] = 1;
        else break;
    }
    for (int i = 1; i <= n; i++) {
        //第1列
        if (a[i][1] != -1) a[i][1] = 1;
        else break;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            if (a[i][j] != -1) {
                if (a[i - 1][j] == -1) a[i - 1][j] = 0;
                if (a[i][j - 1] == -1) a[i][j - 1] = 0;
                a[i][j] = a[i - 1][j] + a[i][j - 1];
            }
        }
    }
    cout << a[n][n];
    return 0;
}

/*
5 1
5 5
*/
