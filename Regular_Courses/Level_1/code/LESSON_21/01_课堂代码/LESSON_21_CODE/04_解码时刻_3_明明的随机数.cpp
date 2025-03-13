#include<bits/stdc++.h>
using namespace std;

int main() {
    bool a[1001] = {0};
    int n, t, cnt;
    //1、输入数据并进行数组标记、随机数个数统计
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (a[t] == 0) //第一次出现时，累计随机数个数
            cnt++;
        a[t] = 1; //标记数组元素
    }
    //2、输出不相同的随机数的个数
    cout << cnt << endl;
    //3、输出小到大排好序的不相同的随机数：数组标记本身按下标有序，直接输出即可
    for (int i = 0; i < 1001; i++) {
        if (a[i] == 1)
            cout << i << " ";
    }
    return 0;
}
