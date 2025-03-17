#include<bits/stdc++.h>
using namespace std;

int main() {
    int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n;
    cin >> n;
    int s = 0;
    for (int i = 2001; i < n; i++) {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
            s = s + 366;
        else
            s = s + 365;
    }
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
        m[2] = 29;
    int ans = 0;
    int id = 0;
    for (int i = 1; i <= 12; i++) {
        //循环月份
        id = s + 13;
        if (id % 7 == 5) {
            ans++;
        }
        s = s + m[i];
    }
    cout << ans;
    return 0;
}
