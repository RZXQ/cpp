#include <iostream>
using namespace std;

int main() {
    //最长连号
    int n;
    cin >> n;
    int t;
    cin >> t;
    int a;
    int cnt = 1;
    int maxn = 0;
    for (int i = 1; i <= n - 1; i++) {
        cin >> a;
        if (a == t + 1) cnt++;
        else cnt = 1;
        t = a;
        if (cnt > maxn) maxn = cnt;
    }
    cout << maxn;
    return 0;
}
