#include<bits/stdc++.h>
using namespace std;

int main() {
    //n矩阵大小 a存储数字矩阵
    int n, a[101][101] = {};
    cin >> n; //输入行列数
    //遍历数字矩阵
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j]; //输入矩阵值
            if (a[i][j] == 0) {
                //寻找数字0
                cout << i << " " << j; //输出0所在的行、列号
                return 0; //结束
            }
        }
    }
    return 0;
}
