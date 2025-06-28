#include<bits/stdc++.h>
using namespace std;

struct node {
    int p; //优惠劵面值
    int t; //开始时间
    bool f; //使用标记(0未使用1已使用)
};

node q[100010]; //队列
int front, rear;
int ans; //总花费
int main() {
    int n; //出行记录数量
    int go, price, time; //出行工具,票价,开始时间
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> go >> price >> time; //1条出行记录
        if (go == 0) {
            //乘坐地铁
            ans = ans + price; //累加地铁票价
            node a = {price, time, 0};
            q[rear++] = a; //增加一张优惠劵
        } else {
            //乘坐公交
            //删除过期的优惠劵
            while (front < rear) {
                //队列非空
                if (time - q[front].t > 45) front++; //过期
                else break; //未过期则退出
            }
            bool flag = 0; //标记：0表示不存在满足的优惠劵
            for (int j = front; j < rear; j++) {
                //遍历优惠劵
                if (price <= q[j].p && q[j].f == 0) {
                    flag = 1; //更新标记
                    q[j].f = 1; //标记劵j已使用
                    break;
                }
            }
            if (flag == 0) //判断标记
                ans = ans + price;
        }
    }
    cout << ans;
    return 0;
}
