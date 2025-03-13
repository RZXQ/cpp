#include<bits/stdc++.h>
using namespace std;
int a[610]; //桶
int main() {
    int n, w; //总人数,获奖率
    cin >> n >> w;
    int x; //分数
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[x]++; //计数
        int sum = 0; //统计获奖人数
        for (int j = 600; j >= 0; j--) {
            //降序遍历分数
            sum += a[j]; //从高到低计算人数
            if (sum >= max(1, i * w / 100)) {
                //大于等于计划人数
                cout << j << ' '; //输出分数
                break;
            }
        }
    }
    return 0;
}
