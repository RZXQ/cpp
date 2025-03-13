#include<bits/stdc++.h>
using namespace std;
int a[101][101], b[101][101];

int main() {
    int m, n; //m-行数，n-列数
    cin >> m >> n;
    //读入第1个矩阵到a数组
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    //读入第2个矩阵到b数组
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];

    //统计相同元素个数
    int cnt = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == b[i][j])
                cnt++;
    //输出结果
    double res = cnt * 1.0 / (m * n);
    cout << fixed << setprecision(2) << res;

    return 0;
}
