/*
Description

儿童节那天有 K 位小朋友到小明家做客。小明拿出了珍藏的巧克力招待小朋友们。
小明一共有 N 块巧克力，其中第 i 块是 Hi×Wi 的方格组成的长方形。
为了公平起见，小明需要从这 N 块巧克力中切出 K 块巧克力分给小朋友们。切出的巧克力需要满足：
1. 形状是正方形，边长是整数。
2. 大小相同。
例如一块 6×5 的巧克力可以切出 6 块 2×2 的巧克力或者 2 块 3×3 的巧克力。
当然小朋友们都希望得到的巧克力尽可能大，你能帮小明计算出最大的边长是多少么？

Input
第一行包含两个整数 N 和 K。(1≤N,K≤10^5)。
以下 N 行每行包含两个整数 Hi 和 Wi。(1≤Hi,Wi≤10^5)。
输入保证每位小朋友至少能获得一块 1×1 的巧克力。

Output
输出切出的正方形巧克力最大可能的边长。

Sample Input 1
2 10
6 5
5 6

Sample Output 1
2

Hint
数据范围与提示
1≤N,K≤10^5，1≤Hi,Wi≤10^5
*/
#include <iostream>
using namespace std;

struct Chocolate {
    int H; // 巧克力的高度
    int W; // 巧克力的宽度
};

Chocolate a[100005]; // 定义存储巧克力的结构体数组

int main() {
    int n, k; // n 块巧克力, k 个人
    cin >> n >> k; // 读取巧克力块数和小朋友人数

    for (int i = 1; i <= n; i++) {
        // 读取每块巧克力的高度和宽度
        cin >> a[i].H >> a[i].W;
    }

    int ans = 0; // 保存最终最大的正方形边长结果
    int L = 1, R = 100000; // 二分查找的边界，初始为1到100000
    while (L <= R) {
        int count = 0; // 用来统计当前边长的正方形可以切出的块数
        int mid = (L + R) / 2; // 计算当前的中间值，即我们理想中的正方形边长
        for (int i = 1; i <= n; i++) {
            // 计算每块巧克力可以切出多少个边长为 mid 的正方形，累加到 count
            count += (a[i].H / mid) * (a[i].W / mid);
        }

        // 如果累加的块数大于等于小朋友人数
        if (count >= k) {
            ans = mid; // 更新答案为当前的中间值
            L = mid + 1; // 尝试更大的正方形边长
        } else {
            R = mid - 1; // 如果累加的块数小于小朋友人数，尝试更小的正方形边长
        }
    }

    cout << ans; // 输出最终结果，即最大可能的正方形边长
}

/* 标准答案:
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    int h[100001], w[100001];
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> h[i] >> w[i];
    //确定寻找范围
    int L = 1, R = 100000;
    int mid = 0;
    int ans = 0;
    while (L <= R) {
        //取中间值
        mid = (L + R) / 2;
        //验证中间值，以中间值做边长能切出几个正方形
        int s = 0;
        for (int i = 1; i <= n; i++)
            s += (h[i] / mid) * (w[i] / mid);
        //判断验证结果，调整范围
        if (s < k) {
            R = mid - 1;
        } else {
            ans = mid;
            L = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
*/
