#include <bits/stdc++.h>
using namespace std;

int main() {
    //创建数组a
    int a[6] = {};
    //输入身高保存至数组中
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }
    //对数组a中部分的元素进行升序排序
    sort(a + 1, a + 5);
    //输出排序后数组中的元素
    for (int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
