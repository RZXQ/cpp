#include<bits/stdc++.h>
using namespace std;
int m, n, k, l, d; //m行n列，k条横向l条纵向，d对同学说话
struct node {
    int x; //位置编号
    int s; //通道x隔开的数量
} a[1010], b[1010]; //a横向通道，b纵向通道
bool cmp(node x, node y) {
    //隔开数量降序
    return x.s > y.s;
}

bool cmp1(node x, node y) {
    //通道编号升序
    return x.x < y.x;
}

int main() {
    cin >> m >> n >> k >> l >> d;
    //初始化通道
    for (int i = 1; i <= n; i++) {
        //纵向
        b[i].x = i;
        b[i].s = 0;
    }
    for (int i = 1; i <= m; i++) {
        //横向
        a[i].x = i;
        a[i].s = 0;
    }
    int x, y, p, q; //1对说话同学的坐标(x,y)(p,q)
    for (int i = 1; i <= d; i++) {
        cin >> x >> y >> p >> q;
        if (x == p) //左右交头接耳
            b[min(y, q)].s++; //纵向通道隔开数量加1
        if (y == q) //前后交头接耳
            a[min(x, p)].s++;
    }
    //根据隔开人数降序
    sort(b + 1, b + n + 1, cmp);
    sort(a + 1, a + m + 1, cmp);
    //根据通道编号升序
    sort(a + 1, a + k + 1, cmp1);
    sort(b + 1, b + l + 1, cmp1);
    //输出结果
    for (int i = 1; i <= k; i++)
        cout << a[i].x << " ";
    cout << endl;
    for (int i = 1; i <= l; i++)
        cout << b[i].x << " ";
    return 0;
}
