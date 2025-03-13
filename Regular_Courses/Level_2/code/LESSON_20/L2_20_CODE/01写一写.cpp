#include<bits/stdc++.h>
using namespace std;

int main() {
    //创建邻接矩阵
    int g[5][5] = {};
    //将每条边存进邻接矩阵
    g[1][2] = 1;
    g[2][1] = 1;
    g[2][4] = 1;
    g[4][2] = 1;
    g[3][4] = 1;
    g[4][3] = 1;
    g[1][3] = 1;
    g[3][1] = 1;
    //输出验证
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++)
            cout << g[i][j] << " ";
        cout << endl;
    }
    return 0;
}
