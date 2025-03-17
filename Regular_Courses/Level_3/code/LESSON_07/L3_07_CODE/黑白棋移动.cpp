#include<bits/stdc++.h>
using namespace std;
char a[205];
int n;
string s[6] = {
    "oooo****--", "ooo--***o*",
    "ooo*o**--*", "o--*o**oo*",
    "o*o*o*--o*", "--o*o*o*o*"
};

void f(int m) {
    if (m == 4) {
        for (int i = 0; i < 6; i++) {
            cout << s[i];
            for (int j = 11; j <= 2 * n + 2; j++)
                cout << a[j];
            cout << endl;
        }
        return;
    }
    for (int i = 1; i <= 2 * n + 2; i++) cout << a[i];
    cout << endl;
    swap(a[m], a[m * 2 + 1]);
    swap(a[m + 1], a[m * 2 + 2]);
    for (int i = 1; i <= 2 * n + 2; i++) cout << a[i];
    cout << endl;
    swap(a[m], a[m * 2 - 1]);
    swap(a[m + 1], a[m * 2]);
    f(m - 1);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        a[i] = 'o';
    for (int i = n + 1; i <= 2 * n; i++)
        a[i] = '*';
    a[2 * n + 1] = a[2 * n + 2] = '-';
    f(n);
    return 0;
}
