#include<bits/stdc++.h>
using namespace std;
int a[1001]; //存储序列
//自定义快速排序函数--降序
void qsort(int left, int right) {
    if (left >= right) return;
    //x基准值 i左端下标 j右端下标
    int x = a[left], i = left, j = right;
    //移动元素
    while (i < j) {
        while (i < j && a[j] <= x) j--;
        a[i] = a[j];
        while (i < j && a[i] >= x) i++;
        a[j] = a[i];
    }
    //固定基准值
    a[i] = x;
    //基准值左右序列继续快排
    qsort(left, i - 1);
    qsort(i + 1, right);
}

int main() {
    int n = 0, cnt = 0, num = 0; //身高数量
    cin >> n; //输入数量
    for (int i = 1; i <= n; i++) {
        cin >> num; //输入学习时长
        if (num >= 3) {
            a[++cnt] = num;
        }
    }

    //调用快速排序函数
    qsort(1, cnt);
    //输出
    for (int i = 1; i <= cnt; i++)
        cout << a[i] << ' ';
    return 0;
}
