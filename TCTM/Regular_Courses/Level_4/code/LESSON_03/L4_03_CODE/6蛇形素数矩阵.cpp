#include<bits/stdc++.h>
using namespace std;
const int N = 1e4;
int a[N], b[N], n = 0, x = 0, y = 0, min1 = 0, max1 = 0, ans = 0, num = 0;
//筛选质数
void prime() {
    for (int i = 2; i <= N; i++) {
        if (a[i] == 0) {
            b[num++] = i;
            if (num >= ans) return;
        }
        for (int j = 0; j < num; j++) {
            if (i * b[j] > N) break;
            a[i * b[j]] = 1;
            if (i % b[j] == 0) break;
        }
    }
}

int main() {
    cin >> n >> x >> y;
    //目标圈，行列最小值
    min1 = min(min(x, y), min(n - x + 1, n - y + 1));
    //目标圈，行列最大值
    max1 = max(max(x, y), max(n - x + 1, n - y + 1));
    //计算目标点以外所有圈的格子数
    ans = n * n - (max1 - min1 + 1) * (max1 - min1 + 1);
    if (x == min1) //目标点在上
        ans += y - min1 + 1;
    else if (y == max1) //目标点在右
        ans += (max1 - min1) + (x - min1 + 1);
    else if (x == max1) //目标点在下
        ans += (max1 - min1) * 2 + (max1 - y + 1);
    else //目标点在左
        ans += (max1 - min1) * 3 + (max1 - x + 1);
    //筛选质数
    prime();
    cout << b[ans - 1];
    return 0;
}
