#include<bits/stdc++.h>
using namespace std;

bool check(int n) {
    //小于2的数字单独判断
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 1; i <= 100; i++) {
        if (check(i))
            cout << i << ' ';
    }
    return 0;
}
