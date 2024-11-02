/*
童程学校原来只有一台饮水机，同学们只能排队打水，消耗了课间时间。学校决定改善设备，增加到了r台饮水机。但是老师还是想知道，学生们按照一个顺序去打水，总的花费时间最少，这样不是更节省时间吗？现在，有 n 个同学排队到 r 台饮水机去打水，他们装满水杯的时间 t1、t2…tn，这些数为整数，应如何安排他们的打水顺序才能使他们总共花费的时间最少？

Input
第一行 n，r (n≤300,r≤100)
第二行为 n 个同学打水所用的时间 ti ( ti≤30)

Output
最少的花费时间

Sample Input 1
4 2
3 2 1 2

Sample Output 1
11

Hint
数据范围与提示：
n≤300，r≤100，ti≤30
*/
#include <iostream>
#include <algorithm>
using namespace std;

int a[305];

int main() {
    int n, r;
    cin >> n >> r;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);

    int totalTime = 0;

    for (int i = 1; i <= r; i++) {
        totalTime += a[i];
    }

    for (int i = r + 1; i <= n; i++) {
        a[i] = a[i] + a[i - r];
        totalTime += a[i];
    }

    cout << totalTime;
    return 0;
}

/* 标准答案;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[301] = {}; //每位同学的打水时间
    int n, r; //n位同学,r台饮水机
    cin >> n >> r;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = r + 1; i <= n; i++) {
        a[i] = a[i] + a[i - r];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += a[i];
    }
    cout << ans;
    return 0;
}
*/
