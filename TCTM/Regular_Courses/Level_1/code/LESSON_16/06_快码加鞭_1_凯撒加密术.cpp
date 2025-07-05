#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    int n;
    cin >> n;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = ((a[i] - 'a' + n) % 26 + 'a');
        else if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] = ((a[i] - 'A' + n) % 26 + 'A');
    }
    cout << a;
    return 0;
}
