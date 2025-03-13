#include<bits/stdc++.h>
using namespace std;

struct node {
    int d1, d2; //d1:导弹距离第一套系统 d2:同理
} a[100001];

bool cmp(node x, node y) {
    return x.d1 > y.d1;
}

int main() {
    int x1, y1, x2, y2; //(x1,y1) (x2,2y)两套系统坐标
    int n, x, y; //n:导弹数量 (x,y):导弹坐标
    cin >> x1 >> y1 >> x2 >> y2 >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        a[i].d1 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
        a[i].d2 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
    }
    sort(a + 1, a + n + 1, cmp);

    int r1 = a[1].d1; //系统1拦截全部导弹
    int r2 = 0; //系统2不拦截
    int min1 = r1 + r2; //当前2套系统最小半径的平方和
    for (int i = 2; i <= n + 1; i++) {
        r1 = a[i].d1; //更新系统1拦截半径的平方
        r2 = max(r2, a[i - 1].d2); //更新系统2拦截半径的平方
        if (r1 + r2 < min1) min1 = r1 + r2; //保留最小半径的平方和
    }
    cout << min1;
    return 0;
}

/*
3 3 7 1
2
1 2
7 2

7
*/
