#include<bits/stdc++.h>
using namespace std;
int a[16][16];

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    //遍历上半部分对角线
    for (int k = 0; k <= m + n - 2; k++) {
        //从下到上遍历行下标
        for (int i = m - 1; i >= 0; i--) {
            //计算得到列下标
            int j = k - i;
            if (j >= 0 && j < n) //在数组内才输出
                cout << a[i][j] << " ";
        }
    }
    return 0;
}
