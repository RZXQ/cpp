#include<iostream>
using namespace std;
const int Max = 100;

int main() {
    int a[100] = {};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) //向数组里存入数据
        cin >> a[i];
    for (int i = n - 1; i >= 0; i--) //逆序输出符合条件元素
        //判断元素能否被3整除
        if (a[i] % 3 == 0) cout << a[i] << " ";
    cout << endl;
    for (int i = n - 1; i >= 0; i--) //逆序输出符合条件元素
        //判断元素下标是否为3的倍数
        if (i % 3 == 0) cout << a[i] << " ";
    return 0;
}
