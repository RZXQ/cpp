#include <bits/stdc++.h>
using namespace std;

struct node {
    string name;
    int score;
} a[100010];

node b[100010]; //临时数组
//合并函数
void merge(long long L, long long R) {
    long long mid = (L + R) / 2, t = 0, first = L, second = mid + 1;
    while (first <= mid && second <= R) {
        //判断左右区间是否有元素
        if (a[first].score >= a[second].score) {
            //左右区间首元素分数对比
            //左区间元素进入临时数组，元素中包含分数及名字
            b[t++] = a[first++];
        } else {
            //否则右区间元素进入临时数组，元素中包含分数及名字
            b[t++] = a[second++];
        }
    }
    //当左区间或右区间有剩余元素时，直接进入临时数组
    while (first <= mid)
        b[t++] = a[first++];
    while (second <= R)
        b[t++] = a[second++];
    //转存到原数组
    for (int i = 0; i < R - L + 1; i++)
        a[L + i] = b[i];
}

//归并排序
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
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].score;
    }
    mergeSort(0, n - 1);
    for (int i = 0; i < k; i++) {
        cout << a[i].name << " " << a[i].score << endl;
    }
    return 0;
}
