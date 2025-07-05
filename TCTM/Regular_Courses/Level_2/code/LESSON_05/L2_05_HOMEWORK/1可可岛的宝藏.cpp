#include<bits/stdc++.h>
using namespace std;

struct node {
    //结构体存储重量和价值
    int wei, v;
    //用来存储单位价值
    double p;
} b[210];

int k, w, s;
bool my_cmp(node x, node y) { return x.p > y.p; } //按照单位价值降序排序
int main() {
    cin >> k;
    //输入k组数据
    while (k--) {
        cin >> w >> s;
        double sum = 0; //在while循环里面初始化
        for (int i = 1; i <= s; i++) {
            cin >> b[i].wei >> b[i].v;
            b[i].p = b[i].v * 1.0 / b[i].wei; //计算单位价值
        }
        //排序
        sort(b + 1, b + s + 1, my_cmp);
        for (int i = 1; i <= s; i++) {
            if (w - b[i].wei >= 0) {
                //能装入
                w -= b[i].wei; //装入，减去物品重量
                sum += b[i].v; //计算装入物品的价值
            } else {
                //不能装入
                sum += w * b[i].p; //装一部分
                break; //终止循环
            }
        }
        cout << fixed << showpoint << setprecision(2) << sum << endl; //输出一定要加换行
    }
    return 0;
}
