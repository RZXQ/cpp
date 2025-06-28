#include <iostream>
using namespace std;

int main() {
    //输入字符数量
    int n;
    cin >> n;
    //循环输入大小写字母，并找出其中最大的字符
    char c[53] = {0};
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        if (c[maxi] < c[i])
            maxi = i;
    }
    //在最大字符前插入字符0
    for (int i = n - 1; i >= maxi; i--) {
        c[i + 1] = c[i];
    }
    c[maxi] = '0';
    //输出插入操作后数组中所有的字符
    for (int i = 0; i <= n; i++) {
        cout << c[i] << " ";
    }
    return 0;
}
