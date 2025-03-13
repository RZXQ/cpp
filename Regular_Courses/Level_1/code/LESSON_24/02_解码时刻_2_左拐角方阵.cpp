#include<bits/stdc++.h>
using namespace std;
int a[20][20];

int main() {
    int n;
    cin >> n;
    //遍历角尖
    for (int j = 0; j < n; j++) {
        //先遍历列
        int i = n - 1 - j; //计算出行下标
        //向上填数
        for (int k = i; k >= 0; k--)
            a[k][j] = j % 2;
        //向右填数
        for (int k = j; k < n; k++)
            a[i][k] = j % 2;
    }
    //输出拐角方阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
