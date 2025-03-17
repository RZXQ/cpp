1
#include<bits/stdc++.h>
2
using namespace std;
3
int a[100005];
4
int main() {
    5
    int n, m;
    6
    cin >> n >> m;
    7
    for (int i = 1; i <= n; i++)
        8
    cin >> a[i];
    9
    for (int i = 1; i <= m; i++) {
        10
        int d, l = 1, r = n;
        11
        bool flag = false;
        12
        cin >> d;
        13
        while (l <= r) {
            14
            int mid = (l + r) / 2;
            15
            if (a[mid] == d) {
                16
                flag = true;
                17
                break;
                18
            } else if (a[mid] > d) {
                19
                r = mid - 1;
                20
            } else {
                21
                l = mid + 1;
                22
            }
            23
        }
        24
        if (flag) cout << "Yes" << endl;
        25
        else
        cout << "No" << endl;
        26
    }
    27
    return 0;
    28
}
