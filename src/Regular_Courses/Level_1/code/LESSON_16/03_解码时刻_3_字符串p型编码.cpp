#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int t = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[i + 1]) t++;
        else {
            cout << t << s[i];
            t = 1;
        }
    }
    return 0;
}
