#include <bits/stdc++.h>
using namespace std;

int getNum(int m, int n) {
    if (m == 1 || m == 0 || n == 1) return 1; //苹果数为1 或者0 
    if (m < n) return getNum(m, m);
    else return getNum(m, n - 1) + getNum(m - n, n);
}

int main() {
    int m, n;
    cin >> m >> n;
    int k = getNum(m, n);
    cout << k;
    return 0;
}
