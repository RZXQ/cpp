#include <bits/stdc++.h>
using namespace std;

int main() {
    //std::ios::sync_with_stdio(false);
    freopen("fre.in", "r", stdin);
    freopen("fre.out", "w", stdout);
    int n;
    cin >> n;
    int s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    cout << s;

    fclose(stdin);
    fclose(stdout);

    return 0;
}
