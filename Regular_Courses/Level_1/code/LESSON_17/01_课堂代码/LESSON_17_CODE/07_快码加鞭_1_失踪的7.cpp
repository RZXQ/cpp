#include <iostream>
using namespace std;
//1、定义seven函数
bool seven(int x) {
    bool f = false;
    while (x) {
        if (x % 10 == 7) {
            f = true;
            break;
        }
        x /= 10;
    }
    return f;
}

int main() {
    int n;
    cin >> n;
    // 统计1~n有多少数字含有7
    int cnt = 0;
    for (int i = 7; i <= n; i++) {
        // 如果当前i包含数字7，则cnt++
        if (seven(i))cnt++;
    }
    cout << n - cnt << endl;
    return 0;
}
