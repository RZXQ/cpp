#include<iostream>
using namespace std;

int main() {
    int n;
    int a[105] = {};
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    //枚举并记录所有两个整数的和
    //创建数组记录和：下标是和，元素表示是否存在
    int num[20010] = {};
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int t = a[i] + a[j]; //计算两个整数的和
            num[t]++; //记录和t出现的次数
        }
    }
    //遍历所有输入的数字，如果num[数字]不是0，说明数字肯定是两个整数和
    int s = 0;
    for (int i = 1; i <= n; i++) {
        if (num[a[i]] != 0) {
            s++;
        }
    }
    cout << s;
    return 0;
}
