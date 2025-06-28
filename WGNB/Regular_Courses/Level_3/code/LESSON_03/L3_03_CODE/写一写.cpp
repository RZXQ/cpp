#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[4][5] = {};
    //第1列赋值为1
    for (int i = 1; i <= 3; i++) {
        a[i][1] = 1;
    }
    //第1行赋值为1
    for (int j = 1; j <= 4; j++) {
        a[1][j] = 1;
    }
    for (int i = 2; i <= 3; i++) {
        for (int j = 2; j <= 4; j++) {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }
    cout << a[3][4];
    return 0;
}
