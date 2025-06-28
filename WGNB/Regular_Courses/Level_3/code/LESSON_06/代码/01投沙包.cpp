#include<bits/stdc++.h>
using namespace std;

struct node {
    int x1, x2; //左上角
    int y1, y2; //右下角
    int l, w; //长宽
} a[10001];

int main() {
    int n, x, y; //沙包数量n,目标点(x,y)
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x1 >> a[i].y1 >> a[i].l >> a[i].w;
        //计算右下角坐标
        a[i].x2 = a[i].x1 + a[i].l;
        a[i].y2 = a[i].y1 - a[i].w;
    }
    cin >> x >> y; //目标点坐标
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        //列举每个沙包
        if (x >= a[i].x1 && x <= a[i].x2 && y >= a[i].y2 && y <= a[i].y1) {
            ans++;
        }
    }
    if (ans != 0) //至少成功1次	
        cout << ans;
    else
        cout << -1;
    return 0;
}
