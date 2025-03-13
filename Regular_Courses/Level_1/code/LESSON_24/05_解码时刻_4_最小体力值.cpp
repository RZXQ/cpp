#include<bits/stdc++.h>
using namespace std;
char a[20][20]; //创建二维字符数组
int main() {
    int m, n;
    cin >> m >> n; //读入字符方阵的大小
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    //读入小童的位置
    int x, y;
    cin >> x >> y;
    //向上走
    int t = 0; //记录当前方向上需要消耗的体力值
    for (int i = 1; i < x; i++)
        if (a[i][y] == '*')
            t += 1;
    int minV = t; //用于记录小童需要消耗的最小体力值
    //向下走
    t = 0;
    for (int i = x + 1; i <= m; i++)
        if (a[i][y] == '*')
            t += 1;
    minV = min(t, minV);
    //向左走
    t = 0;
    for (int j = 1; j < y; j++)
        if (a[x][j] == '*')
            t += 1;
    minV = min(t, minV);
    //向右走
    t = 0;
    for (int j = y + 1; j <= n; j++)
        if (a[x][j] == '*')
            t += 1;
    minV = min(t, minV);
    cout << minV;
    return 0;
}
