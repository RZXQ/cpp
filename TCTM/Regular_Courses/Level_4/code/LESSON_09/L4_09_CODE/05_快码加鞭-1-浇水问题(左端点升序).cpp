#include<bits/stdc++.h>
using namespace std;

struct node {
    int l;
    int r;
} a[10010];

bool cmp(node x, node y) {
    return x.l < y.l;
}

int main() {
    int m, n;
    cin >> m;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].l >> a[i].r;
    }
    sort(a + 1, a + 1 + n, cmp);
    int res = 0, start = 0;
    bool flag = true;
    // 遍历所有区间
    for (int i = 1; i <= n; i++) {
        // r可理解为当前覆盖到的区域
        int j = i, maxr = INT_MIN; // 双指针,j从第i个区间开始找
        // 取所有左端点能覆盖st中右端点最大的区间,覆盖到这个位置
        while (j <= n && a[j].l <= start) {
            maxr = max(maxr, a[j].r); //2  区间2.r为1，未更新成功
            j++; //2 3
        }
        // 如果r小于l,说明线段不可被已有区间覆盖
        if (maxr < 0) {
            //2
            flag = false;
            break;
        }
        // 如果找得到,答案+1
        res++;
        // 已经完全覆盖
        if (maxr >= m) {
            break;
        }
        // 否则更新i和j
        start = maxr; // 迭代st,后面的区间继续和st比
        i = j - 1; // 双指针,加速遍历
    }
    if (flag) cout << res;
    else cout << -1;
    return 0;
}
