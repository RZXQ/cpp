#include<bits/stdc++.h>
using namespace std;
string s;
int ans;

int main() {
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            ans++;
            while (s[i] >= '0' && s[i] <= '9' && i < s.length()) {
                i++;
            }
        }
    }
    cout << ans;
    return 0;
}
