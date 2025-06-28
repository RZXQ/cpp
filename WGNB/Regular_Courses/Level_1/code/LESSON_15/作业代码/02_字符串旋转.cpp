#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = s.size();
    //输出后半部分
    for (int i = n - k; i < n; i++)
        cout << s[i];
    //输出前半部分
    for (int i = 0; i < n - k; i++)
        cout << s[i];
    return 0;
}
