#include <bits/stdc++.h>
using namespace std;

int main() {
    //1、统计数字个数
    int a = 0;
    //2、外层循环控制分母
    for (int i = 1; i <= 99; i++) {
        //3、内层循环控制分子
        for (int j = 1; j <= i; j++) {
            if (i == 99 && j == 99) {
                cout << j << "/" << i << endl;
            } else {
                cout << j << "/" << i << ",";
            }
            a++;
        }
    }
    cout << a;
    return 0;
}
