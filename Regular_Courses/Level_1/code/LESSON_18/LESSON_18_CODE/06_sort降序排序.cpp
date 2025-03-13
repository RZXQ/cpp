#include <bits/stdc++.h>
using namespace std;
//定义cmp函数
bool cmp(int a, int b) {
    return a > b;
    //修改为升序比较规则
    //return a<b;
}

int main() {
    int a[6] = {};
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }
    //对数组进行降序排序
    sort(a, a + 6, cmp);
    //输出排序后数组中的元素
    for (int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
