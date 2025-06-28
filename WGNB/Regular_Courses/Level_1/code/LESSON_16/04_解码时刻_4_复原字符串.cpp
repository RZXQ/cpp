#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int l = 0, r = str.length() - 1;
    while (l <= r) {
        if (str[l] == str[r] && str[l] != '0') {
            l++;
            r--;
        } else if (str[l] == '0' && str[r] != '0') {
            str[l] = str[r];
            l++;
            r--;
        } else if (str[l] != '0' && str[r] == '0') {
            str[r] = str[l];
            l++;
            r--;
        } else break;
    }
    if (l > r) cout << str;
    else cout << "IMPOSSIBLE";
    return 0;
}
