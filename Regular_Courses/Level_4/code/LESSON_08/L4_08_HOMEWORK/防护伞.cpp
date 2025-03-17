#include<bits/stdc++.h>
using namespace std;

struct node {
    double x, y;
} a[1001];

int main() {
    int n;
    double ans = INT_MAX;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].x >> a[i].y;
    for (int i = 1; i <= n; i++) {
        //圆心 
        double cnt = 0;
        for (int j = 1; j <= n; j++) {
            //遍历所有点到圆形的距离 
            double s = sqrt(pow(a[i].x - a[j].x, 2) + pow(a[i].y - a[j].y, 2));
            if (cnt < s) cnt = s;
        }
        if (ans > cnt) ans = cnt; //可以覆盖所有点的最短距离
    }
    const double pi = 3.1415926535;
    cout << fixed << setprecision(4) << pi * ans * ans;
    return 0;
}
