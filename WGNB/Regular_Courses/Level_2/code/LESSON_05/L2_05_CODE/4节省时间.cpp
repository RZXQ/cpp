#include <bits/stdc++.h>
using namespace std;
int a[1001], n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n); //按照答疑时间升序排序
    int s = 0;
    for (int i = 0; i < n; i++) {
        //第1个人的答疑时间乘以n,等于自己的答疑时间和后面人的等待时间  
        s += (n - i) * a[i]; //计算所有人的总时间
    }
    cout << fixed << setprecision(2) << s * 1.0 / n;
    return 0;
}
