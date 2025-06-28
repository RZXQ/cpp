#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n, z = 0, c = 0; //z用来记正方形个数，c来记长方形
    cin >> n >> m; //输入
    //遍历左上角点
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            //遍历右下角点
            for (int k = i + 1; k <= n; k++) {
                for (int l = j + 1; l <= m; l++) {
                    if (k - i == l - j) z++; //是正方形
                    else c++; //是长方形					
                }
            }
        }
    }
    cout << z << " " << c; //输出
    return 0;
}
