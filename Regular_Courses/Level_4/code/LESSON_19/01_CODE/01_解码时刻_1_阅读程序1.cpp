#include<bits/stdc++.h>
using namespace std;
int a[100005];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++) {
        int d, l = 1, r = n;
        bool flag = false;
        cin >> d;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a[mid] == d) {
                flag = true;
                break;
            } else if (a[mid] > d) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
