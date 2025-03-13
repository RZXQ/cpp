#include <bits/stdc++.h>
using namespace std;
bool a[105][105];

int main() {
    int n, m;
    cin >> n >> m;
    //二维数组元素赋值为1，代表有瓜
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = 1;
        }
    }
    //每次偷瓜区域的元素变为0
    int x, y;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        a[x][y] = 0;
        a[x + 1][y] = 0;
        a[x][y + 1] = 0;
        a[x + 1][y + 1] = 0;
    }
    //统计剩余瓜数量
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 1)
                sum++;
        }
    }
    cout << sum;
    return 0;
}
