#include<bits/stdc++.h>
using namespace std;
int a[16][16];

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    //遍历对角线 
    for (int k = 0; k <= m + n - 2; k++) {
        //遍历对角线上的每个元素
        for (int j = 0; j <= n - 1; j++) {
            //计算得到行下标
            int i = k - j;
            if (i >= 0 && i < m) //在数组内才输出 
                cout << a[i][j] << " ";
        }
    }
    return 0;
}
