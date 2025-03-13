#include <bits/stdc++.h>
using namespace std;

int main() {
    //1、定义变量，保存行数与列数
    int m, n;
    cin >> m >> n;
    //2、外层循环控制行数
    for (int i = 1; i <= m; i++) {
        //3、内层循环控制列数
        for (int j = 1; j <= n; j++) {
            //4、判断是否满足输出'*'的条件
            if (i == 1 || i == m || j == 1 || j == n)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
