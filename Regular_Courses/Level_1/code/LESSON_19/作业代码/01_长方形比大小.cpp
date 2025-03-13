#include<bits/stdc++.h>
using namespace std;

struct rect {
    int num; //序号
    int rs, rc; //面积和周长
} a[101];

bool cmp(rect x, rect y) {
    if (x.rs != y.rs)
        return x.rs > y.rs;
    else return x.rc > y.rc;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        a[i].rs = x * y; //计算出长方形的面积
        a[i].rc = 2 * (x + y); //计算出长方形的周长
        a[i].num = i; //记录长方形的序号
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++)
        cout << a[i].num << endl;
    return 0;
}
