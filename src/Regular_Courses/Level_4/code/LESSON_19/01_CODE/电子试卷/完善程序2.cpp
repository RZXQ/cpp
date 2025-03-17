1
#include<bits/stdc++.h>
2
using namespace std;
3
const int maxn = 100001;
4
int a[maxn];
5
int n, m;
6
bool solve(int x, int st, int ed) {
    7
    int lbound = st, rbound = ed, mid;
    8
    while (____①____) {
        9
        mid = (lbound + rbound) >> 1;
        10
        if (a[mid] == x) {
            11
            return true;
            12
        } else if (____②____) {
            13
            lbound = mid + 1;
            14
        } else {
            15
            ____③____;
            16
        }
        17
    }
    18
    return false;
    19
}

20
int main() {
    21
    cin >> n >> m;
    22
    for (int i = 1; i <= n; i++) {
        23
        cin >> a[i];
        24
    }
    25
    _____④_____;
    26
    for (int i = 1; i <= n; i++) {
        27
        if (____⑤____) {
            28
            if (solve(m - a[i], i + 1, n)) {
                //在后面的数据中查询 m-a[i] 
                29
                cout << a[i] << " " << m - a[i] << endl;
                30
            }
            31
        } else {
            32
            break;
            33
        }
        34
    }
    35
    return 0;
    36
}
