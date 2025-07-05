#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s1, s2;
    cin >> n;
    cin >> s1;
    for (int i = 1; i < n; i++) {
        cin >> s2;
        if (s2 > s1) s1 = s2;
    }
    cout << s1;
    return 0;
}
