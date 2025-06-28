#include<bits/stdc++.h>
using namespace std;

int main() {
    double A, I;
    cin >> A >> I;
    //枚举A到10000之间所有数字
    for (int N = A; N <= 10000; N++) {
        //验证是否符合需求
        if (ceil(N / A) >= I) {
            cout << N;
            break;
        }
    }
    return 0;
}
