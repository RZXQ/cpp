#include <bits/stdc++.h>
using namespace std;
int a[1001], n, sum = 0;

int main() {
    for (int i = 1; i <= 4; i++) {
        cin >> n;
        int t = 0; //定义一个变量，存储每堆胡萝卜重量的最大值。
        for (int j = 1; j <= n; j++) {
            cin >> a[j]; //输入胡萝卜的重量
            //胡萝卜的重量大于t，就更新t的值。求出每一堆的最优结果。
            if (a[j] > t) t = a[j];
        }
        sum += t; //累加每堆最重胡萝卜的重量，得到最终的最优结果。
    }
    cout << sum << endl;
    return 0;
}
