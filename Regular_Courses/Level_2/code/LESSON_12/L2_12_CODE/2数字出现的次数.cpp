#include<bits/stdc++.h>
using namespace std;
char a[1000], b[1000];
int a1[1000], b1[1000], c1[1001];
int m, ans; //ans:统计数字m在和中出现的次数
int main() {
    cin >> a >> b >> m;
    int la = strlen(a);
    int lb = strlen(b);
    for (int i = 0; i < la; i++) {
        a1[la - i - 1] = a[i] - 48;
    }
    for (int i = 0; i < lb; i++) {
        b1[lb - i - 1] = b[i] - 48;
    }
    int x = 0; //进位
    int lc = la > lb ? la : lb;
    for (int i = 0; i < lc; i++) {
        c1[i] = a1[i] + b1[i] + x;
        x = c1[i] / 10;
        c1[i] = c1[i] % 10;
    }
    if (x != 0) {
        c1[lc] = x;
        lc++;
    }
    for (int i = lc - 1; i >= 0; i--) {
        if (c1[i] == m) ans++;
    }
    cout << ans;
    return 0;
}
