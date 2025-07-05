#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum, p, x;
    p = 1; //第几人
    x = 2; //这一人分得的数量
    sum = x; //实际总数
    while (sum <= n) {
        cout << p << " " << x << " " << endl;
        p++;
        x += 2;
        sum += x;
    }
    return 0;
}
