#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxn = 0;
    int sum = 0, cnt = 0, k = 1, res = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
        cnt++;
        if (cnt == pow(2, k - 1)) {
            if (maxn < sum) {
                maxn = sum;
                res = k;
            }
            sum = 0;
            cnt = 0;
            k++;
        }
    }
    res = (maxn < sum) ? k : res;
    cout << res;
    return 0;
}
