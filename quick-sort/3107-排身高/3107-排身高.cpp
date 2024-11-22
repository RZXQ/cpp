/*
Description
请用“快速排序算法”为若干个小动物的身高进行从低到高的排序。

Input
第一行，一个整数n，表示有n个身高（1<=n<=1000）。
第二行，n个大小不同的数字，用空格隔开（0<=身高<=100）。

Output
一行，升序排列的身高，用空格隔开。

Sample Input 1
6
5 6 2 9 8 1

Sample Output 1
1 2 5 6 8 9
*/
#include <iostream>
using namespace std;
int a[1001]; //存储序列
//自定义快速排序函数--升序
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
    int n = 0; //身高数量
    cin >> n; //输入数量
    for (int i = 1; i <= n; i++)
        cin >> a[i]; //输入身高
    //调用快速排序函数
    qsort(1, n);
    //输出
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    return 0;
}
