#include<iostream>
using namespace std;

int main() {
    int n, a[21] = {0}, m = 1;
    cin >> n;
    a[1] = 1; //对折一次，一个折痕
    for (int i = 2; i <= n; i++) {
        m = m * 2; //新的折痕
        a[i] = a[i - 1] + m; //当前折痕=旧的折痕+新的折痕
    }
    cout << a[n]; //输出对折n次的折痕
    return 0;
}
