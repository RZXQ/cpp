#include <bits/stdc++.h>
using namespace std;
int a[100005], b[100005], n, m;

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    if (n > m) {
        //特判蛋糕数量多于盒子输出-1
        cout << -1;
        return 0;
    }
    sort(a + 1, a + n + 1); //蛋糕升序排序
    sort(b + 1, b + m + 1); //盒子升序排序 
    int ans = 0; //统计蛋糕盒价格，即蛋糕盒容量
    int sum = n; //蛋糕总数
    int i = 1, j = 1;
    while (i <= n && j <= m) {
        //只要蛋糕装完即终止循环
        if (a[i] <= b[j]) {
            //如果蛋糕能够装下
            ans += b[j]; //统计蛋糕盒价值
            i++;
            j++;
            sum--; //蛋糕数量减一
        } else
            j++; //装不下，枚举下一个盒子
    }
    if (sum == 0) //如果蛋糕都装完，输出结果
        cout << ans;
    else //还有剩下的蛋糕没装输出-1
        cout << -1;
    return 0;
}
