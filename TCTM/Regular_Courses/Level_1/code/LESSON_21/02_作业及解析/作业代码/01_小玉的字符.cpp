#include<bits/stdc++.h>
using namespace std;
int arr[26] = {};

int marrin() {
    string s;
    cin >> s;
    int len = s.length();
    int cnt = 0;
    for (int i = 0; i < len; i++) {
        if (arr[s[i] - 'a'] == 0) {
            cnt++;
        }
        arr[s[i] - 'a'] = 1;
    }
    cout << cnt << endl;
    for (int i = 0; i < 26; i++) {
        if (arr[i] == 1) {
            char c = 'a' + i;
            cout << c;
        }
    }
    return 0;
}
