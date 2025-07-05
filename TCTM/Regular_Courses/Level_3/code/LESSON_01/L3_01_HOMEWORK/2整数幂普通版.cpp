#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n > 0 && n % 2 == 0) {
        n /= 2;
    }
    if (n == 1) cout << "yes";
    else cout << "no";
    return 0;
}
