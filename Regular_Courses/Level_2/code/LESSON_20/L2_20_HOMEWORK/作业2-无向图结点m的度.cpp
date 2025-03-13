#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int g[11][11] = {};
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> g[i][j];
    //无向图结点m的度，就是下标m这行，非0元素个数
    int d = 0;
    for (int i = 1; i <= n; i++) {
        if (g[m][i] != 0)
            d++;
    }
    cout << d;
    return 0;
}
