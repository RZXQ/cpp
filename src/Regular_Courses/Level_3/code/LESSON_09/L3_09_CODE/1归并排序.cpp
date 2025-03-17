#include <bits/stdc++.h>
using namespace std;
//a:为待排序元素数组
//b:存放中间结果的临时数组
//L:数组a中当前待排序元素的最小下标
//R:数组a中当前待排序元素的最大下标
//first:数组a中当前待排序元素左半部分首元素下标
//second:数组a中当前待排序元素右半部分首元素下标
long long n, a[500010], b[500010];
//合并
void merge(long long L, long long R) {
    long long mid = (L + R) / 2, t = 0, first = L, second = mid + 1;
    while (first <= mid && second <= R) {
        //判断左右区间是否有值
        if (a[first] <= a[second]) //左右区间首元素对比
            b[t++] = a[first++]; //左区间数进入临时数组
        else
            b[t++] = a[second++]; //否则右区间的数进入临时数组
    }
    //当左区间或右区间有剩余元素时，直接进入临时数组
    while (first <= mid) b[t++] = a[first++];
    while (second <= R) b[t++] = a[second++];
    for (int i = 0; i < R - L + 1; i++)
        a[L + i] = b[i]; //转存到原数组
}

//递归处理左右序列，将左右序列合并成有序
void mergeSort(long long L, long long R) {
    //取下标中间值
    long long mid = (L + R) / 2;
    //对左序列归并排序
    if (mid > L) mergeSort(L, mid);
    //对右序列归并排序
    if (mid + 1 < R) mergeSort(mid + 1, R);
    //将左右序列合并成有序序列
    merge(L, R);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
