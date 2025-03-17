#include<bits/stdc++.h>
using namespace std;
int n, a[1000001];
//求最大公约数
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

//自定义快速排序函数
void qsort(int left, int right) {
    if (left >= right) return;
    //x基准值 i左端下标 j右端下标
    int x = a[left], i = left, j = right;
    //移动元素
    while (i < j) {
        while (i < j && a[j] >= x) j--;
        a[i] = a[j];
        while (i < j && a[i] <= x) i++;
        a[j] = a[i];
    }
    //固定基准值
    a[i] = x;
    //基准值左右序列继续快排
    qsort(left, i - 1);
    qsort(i + 1, right);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    qsort(1, n);
    int m = a[2] - a[1];
    //找最小等差值
    for (int i = 2; i < n; i++) {
        m = gcd(m, a[i + 1] - a[i]);
    }
    //求等差数列元素个数
    if (a[1] == a[n])
        cout << n << endl;
    else
        cout << (a[n] - a[1]) / m + 1;
    return 0;
}
