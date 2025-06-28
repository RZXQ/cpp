#include<bits/stdc++.h>
using namespace std;
const int maxn = 8;
int a[maxn];
int n, m;

bool solve(int x, int st, int ed) {
    int lbound = st, rbound = ed, mid;
    while (lbound < rbound) {
        mid = (lbound + rbound) >> 1;
        if (a[mid] == x) {
            return true;
        } else if (a[mid] < x) {
            lbound = mid + 1;
        } else {
            rbound = mid - 1;
        }
    }
    return false;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) {
        if (a[i] < (m >> 1)) {
            if (solve(m - a[i], i + 1, n)) {
                cout << a[i] << " " << m - a[i] << endl;
            }
        } else {
            break;
        }
    }
    return 0;
}

/*
4 6
2 5 1 4

7 6
3 1 6 2 5 7 4
1 5
2 4
*/
