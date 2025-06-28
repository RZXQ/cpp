#include <iostream>
using namespace std;
const int maxn = 10000;
int n;
int a[maxn];
int b[maxn];
int ans = 0;

int f(int l, int r, int d) {
    if (l > r)
        return 0;
    int min = maxn, mink;
    for (int i = l; i <= r; ++i) {
        ans++;
        if (min > a[i]) {
            min = a[i];
            mink = i;
        }
    }
    int lres = f(l, mink - 1, d + 1);
    int rres = f(mink + 1, r, d + 1);
    return lres + rres + d * b[mink];
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    cout << f(0, n - 1, 1) << endl;
    cout << ans;
    return 0;
}

/*
7
4 2 5 1 6 3 7
1 1 1 1 2 2 2

7
4 2 5 1 6 3 7
1 2 3 4 5 6 7
*/
