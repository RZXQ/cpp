#include<bits/stdc++.h>
using namespace std;
int ans = 1;

void f(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (y % i == 0 && i <= y / i) {
            ans++;
            f(i, y / i);
        }
    }
}

int main() {
    int a;
    cin >> a;
    f(2, a); //从2开始分解a
    cout << ans;
    return 0;
}
