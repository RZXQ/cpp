#include<iostream>
using namespace std;

int main() {
    int a[10000010] = {};
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i]; //读入每个苹果的重量
    }
    int left = 1, right = n, mid;
    cin >> m; //查找m克的苹果
    while (left <= right) {
        //二分算法
        mid = (left + right) / 2;
        if (a[mid] == m) {
            //找到输出YES
            cout << "YES";
            return 0; //结束程序
        } else if (a[mid] > m) {
            right = mid - 1; //左边查找
        } else {
            left = mid + 1; //右边查找
        }
    }
    cout << "NO"; //没有找到输出NO
    return 0;
}
