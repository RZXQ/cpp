#include<bits/stdc++.h>
using namespace std;

struct node {
    int x1, y1, x2, y2; //左上角(x1,y1) 右下角(x2,y2)
    int l, w; //l:长 w:宽
} a[10001];

int main() {
    int n, x, y; //目标点(x,y)
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x1 >> a[i].y1 >> a[i].w >> a[i].l;
        a[i].x2 = a[i].x1 + a[i].w;
        a[i].y2 = a[i].y1 + a[i].l;
    }
    cin >> x >> y;
    for (int i = n; i > 0; i--) {
        if (x >= a[i].x1 && x <= a[i].x2 && y >= a[i].y1 && y <= a[i].y2) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
