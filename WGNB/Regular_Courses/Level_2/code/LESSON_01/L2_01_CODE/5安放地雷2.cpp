#include<bits/stdc++.h>
using namespace std;

int main() {
    //a数组存储矩阵数字 n表示行列 sum记录消灭敌人数
    int a[101][101] = {}, n, sum = 0;
    cin >> n; //输入行列值
    //为矩阵赋值
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    //搜索整个矩阵
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            //判断埋雷位置
            if (a[i][j] == 0) {
                //计算某行敌人数
                for (int k = 1; k <= n; k++) {
                    if (a[i][k] == 1)
                        sum += a[i][k];
                }
                //计算某列敌人数
                for (int k = 1; k <= n; k++) {
                    if (a[k][j] == 1)
                        sum += a[k][j];
                }
                cout << sum; //输出清除敌人数量
                return 0;
            }
        }
    }
    return 0;
}
