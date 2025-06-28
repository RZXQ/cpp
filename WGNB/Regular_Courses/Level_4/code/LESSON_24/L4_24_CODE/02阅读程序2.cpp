#include <bits/stdc++.h>
using namespace std;

void func(string str, int n, int len) {
    char tmp[n][len] = {};
    char ans[n * len + 1] = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < len; j++) {
            tmp[i][j] = str[i * len + j];
        }
    }
    int index = 0;
    for (int i = 0; i < len * n; i++) {
        for (int j = 0; j < n; j++) {
            if (tmp[j][i] != '\0' && index < len * n) {
                ans[index] = tmp[j][i];
            }
            index++;
        }
    }
    cout << ans << endl;
}

int main() {
    int len, n;
    string str;
    cin >> str >> n;
    len = str.size();
    func(str, n, (len + n - 1) / n);
    return 0;
}
