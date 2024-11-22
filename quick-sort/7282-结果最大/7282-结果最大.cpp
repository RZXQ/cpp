/*
Description
给定 n 个非负整数，现在需要将他们重新排列并拼接。每个数不可拆分，要求最后的结果最大。
如：2 23 8 20，最大的排列方式：823220

Input
第 1 行输入一个 n。
第 2 行，输入 n 个整数。

Output
输入排序拼接后的最大整数。

Sample Input 1
2
30 1

Sample Output 1
301

Hint
数据范围与提示
1≤n≤100，0≤每个整数≤10000
*/
#include<iostream>
using namespace std;
string a[101];

void qsort(int left, int right) {
    if (left >= right) return;
    string x = a[left];
    int i = left, j = right;
    while (i < j) {
        while (i < j && a[j] + x <= x + a[j]) j--;
        a[i] = a[j];
        while (i < j && a[i] + x >= x + a[i]) i++;
        a[j] = a[i];
    }
    a[i] = x;
    qsort(left, i - 1);
    qsort(i + 1, right);
}

int main() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    qsort(1, n);
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    return 0;
}
