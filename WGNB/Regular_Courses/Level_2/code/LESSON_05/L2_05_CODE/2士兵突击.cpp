#include <bits/stdc++.h>
using namespace std;

int main() {
    //定义变量和数组
    int n, c, w[2001] = {};
    //输入士兵个数n和船载重量
    cin >> n >> c;
    //输入n个士兵兔体重
    for (int i = 0; i < n; i++)
        cin >> w[i];
    //按照体重升序排序
    sort(w, w + n);
    //tmp计算上船的总体重ans数量
    int tmp = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        //从体重最小士兵开始依次上船
        tmp += w[i];
        //上船士兵兔总重量小于载重量
        if (tmp <= c)
            ans++; //统计士兵数量
        else
            break; //否则终止循环
    }
    cout << ans;
    return 0;
}
