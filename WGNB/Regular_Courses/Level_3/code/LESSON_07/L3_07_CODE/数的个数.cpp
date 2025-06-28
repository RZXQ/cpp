#include<bits/stdc++.h>
using namespace std;
int ans = 1;

void f(int x) {
    for (int i = 1; i <= x / 2; i++) {
        ans++;
        f(i);
    }
}

int main() {
    int n;
    cin >> n;
    f(n);
    cout << ans;
    return 0;
}
