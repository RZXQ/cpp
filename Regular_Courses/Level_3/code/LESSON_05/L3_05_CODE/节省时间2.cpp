#include<bits/stdc++.h>
using namespace std;
int a[401];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n); //升序排序
    for (int i = 3; i <= n; i++) {
        a[i] += a[i - 2];
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
    }
    cout << sum;
    return 0;
}
