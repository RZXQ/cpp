#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[2001], b[2001];
    cin >> a >> b;
    int la = strlen(a), lb = strlen(b);
    if ((la < lb) || (la == lb && strcmp(a, b) < 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
