#include<bits/stdc++.h>
using namespace std;
int a[1010], n;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    //按照打水时间排序
    sort(a + 1, a + n + 1);
    int s = 0;
    for (int i = 1; i <= n; i++) {
        //计算等待时间
        s += (n - i + 1) * a[i];
    }
    cout << fixed << showpoint << setprecision(2) << s * 1.0 / n;
    return 0;
}
