#include<bits/stdc++.h>
using namespace std;
//求x所含质因数数量
int factor(int x) {
    int num = 0;
    for (int i = 2; i * i <= x; i++) {
        while (x % i == 0) {
            num++;
            x /= i;
        }
    }
    if (x != 1) num++;
    return num;
}

int main() {
    //ans保存最大质因数数量
    int n = 0, m = 0, ans = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        ans = max(ans, factor(i));
    }
    cout << ans;
    return 0;
}
