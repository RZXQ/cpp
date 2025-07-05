#include<bits/stdc++.h>
using namespace std;
int ans;

void f(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (y % i == 0 && i <= y / i) {
            ans++;
            f(i, y / i);
        }
    }
}

int main() {
    int t; //t组数据
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        ans = 1; //初始化为1
        f(2, a);
        cout << ans << endl;
    }
    return 0;
}
