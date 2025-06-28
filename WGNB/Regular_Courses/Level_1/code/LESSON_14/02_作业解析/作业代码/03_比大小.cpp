#include<bits/stdc++.h>
using namespace std;
char a[105], b[105];

int main() {
    cin >> a >> b;
    if (strlen(a) > strlen(b)) cout << a;
    else if (strlen(a) < strlen(b)) cout << b;
    else {
        for (int i = strlen(a) - 1; i >= 0; i--) {
            if (a[i] == b[i]) continue;
            if (a[i] < b[i]) cout << b;
            else cout << a;
            break;
        }
    }
    return 0;
}
