#include <bits/stdc++.h>
using namespace std;

int main() {
    //记录最高分和最低分
    int minn = 100;
    int maxn = 1;
    //记录最终得分
    int sum = 0;
    //使用for循环接收输入的5个分数
    int n;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        sum += n;
        maxn = max(maxn, n);
        minn = min(minn, n);
    }
    //去掉一个最高分和一个最低分
    sum = sum - maxn - minn;
    //输出最终得分
    cout << sum;
    return 0;
}
