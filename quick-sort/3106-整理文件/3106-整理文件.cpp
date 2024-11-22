/*
Description
现在地上散落着一些文件，具体数量不清楚（文件数<=100），每份文件上都有唯一编号，编号是1到100这100个数中的任意一个数字，现在时间紧迫，需要你快速为文件排好顺序，顺序按照编号从大到小。（用快速排序解决此问题）

Input
第一行输入一个整数n，表示文件的数量。
第二行输入n个整数，表示文件的编号，用空格隔开。

Output
一行整数，用空格隔开，降序排列的文件编号。

Sample Input 1
5

6 1 9 2 7
Sample Output 1
*/
#include<iostream>
using namespace std;
int a[101]; //存储序列
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
    int n = 0; //文件数量
    cin >> n; //输入数量
    for (int i = 1; i <= n; i++)
        cin >> a[i]; //输入文件编号
    //调用快速排序函数
    qsort(1, n);
    //输出
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    return 0;
}