#include <iostream>
using namespace std;
int a[] = {2, 3, 5, 7}, b[] = {1, 3, 7, 9};
int ans;

bool check(int x) {
    //判断整数x是否为质数
    if (x == 1) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

void dfs(int x, int n) {
    if (x > n) {
        return;
    }
    ans++;
    for (int i: b) {
        if (check(x * 10 + i)) {
            dfs(x * 10 + i, n);
        }
    }
}

int main() {
    int num;
    cin >> num;
    for (int i: a) {
        dfs(i, num);
    }
    cout << ans;
    return 0;
}
