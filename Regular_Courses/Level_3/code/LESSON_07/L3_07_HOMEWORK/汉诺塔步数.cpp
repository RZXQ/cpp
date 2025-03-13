#include<bits/stdc++.h>
using namespace std;
int ans;

void hanoi(char a, char b, char c, int n) {
    if (n == 1) {
        ans++;
        cout << ans << ':' << a << '-' << c << endl;
        return;
    }
    hanoi(a, c, b, n - 1);
    ans++;
    cout << ans << ':' << a << '-' << c << endl;
    hanoi(b, a, c, n - 1);
}

int main() {
    int n;
    cin >> n;
    hanoi('A', 'B', 'C', n);
    return 0;
}
