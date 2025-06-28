#include <bits/stdc++.h>
using namespace std;
//自定义比较规则
bool cmp(string a, string b) {
    return a + b > b + a;
}

int main() {
    //创建字符串存储输入的数据
    string a[10000];
    //接收输入的整数个数
    int n;
    cin >> n;
    //循环保存
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //进行排序，排序规则需要自定cmp函数
    sort(a, a + n, cmp);
    //输出
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }

    return 0;
}
