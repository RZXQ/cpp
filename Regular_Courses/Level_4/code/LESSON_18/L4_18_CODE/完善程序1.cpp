#include<bits/stdc++.h>
using namespace std;
string s;

long long solve(int u, int v) {
    long long ans = 0;
    for (int i = v; i >= u; i--) {
        ans = (ans << 3) + (ans << 1) + s[i] - '0'; // ____1____
    }
    return ans;
}

int main() {
    cin >> s;
    int len = s.size();
    int st = 0, ed;
    ed = len - 1; //_____2_____;
    for (int i = 0; i < len; i++) {
        if (s[i] == '.' || s[i] == '/' || s[i] == '%') {
            ed = i - 1;
            break;
        }
    }
    cout << solve(st, ed);
    int k = ed + 1;
    if (s[k] != '\0') {
        cout << s[k];
        st = k + 1; //______3_____;
        while (s[st] == '0' && s[k] == '.' && st < len - 1) {
            // ____小数点后为0的情况___4______
            st++;
        }
        if (st <= len - 1) {
            // % 的情况 ___5_______ 
            ed = len - 1;
            cout << solve(st, ed);
        }
    }
    return 0;
}
