#include <iostream>
using namespace std;

int main() {
    //统计天数
    int n;
    cin >> n;
    int t;
    cin >> t;
    int a;
    int cnt = 1;
    int max = 0;
    for (int i = 1; i <= n - 1; i++) {
        cin >> a;
        if (a > t) cnt++;
        else cnt = 1;
        t = a;
        if (cnt > max) max = cnt;
    }
    cout << max;
    return 0;
}
