#include<bits/stdc++.h>
using namespace std;
int a[5000010];

int main() {
    int n;
    int x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    //有序数组中二分找数
    //搜索范围是数组下标:1~n
    //判断对象是数组元素a[mid]
    int L = 1, R = n, mid;
    while (L <= R) {
        mid = (L + R) / 2;
        if (a[mid] == x) {
            //找到目标
            cout << mid; //输出下标
            return 0;
        } else if (a[mid] > x) {
            //中间值大于目标
            R = mid - 1;
        } else {
            //中间值小于目标
            L = mid + 1;
        }
    }
    cout << -1; //找不到输出-1
    return 0;
}
