1
#include <bits/stdc++.h>
2
using namespace std;
3
int main() {
    4
    int n;
    5
    cin >> n;
    6
    vector<int> fac;
    7
    fac.reserve((int) ceil(sqrt(n)));
    8
    int i;
    9
    for (i = 1; i * i < n; ++i) {
        10
        if (__①__) {
            11
            fac.push_back(i);
            12
        }
        13
    }
    14
    for (int k = 0; k < fac.size(); ++k) {
        15
        cout << __②__ << " ";
        16
    }
    17
    if (__③__) {
        18
        cout << __④__ << " ";
        19
    }
    20
    for (int k = fac.size() - 1; k >= 0; --k) {
        21
        cout << __⑤__ << " ";
        22
    }
    23
    return 0;
    24
}
