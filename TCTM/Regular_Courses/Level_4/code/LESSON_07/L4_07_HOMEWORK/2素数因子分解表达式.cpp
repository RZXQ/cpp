#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i) && n % i == 0) {
            //首先保证i为质数，并且整除n
            int cnt = 0;
            if (flag) cout << i; //根据flag输出 i
            else cout << '*' << i;
            flag = false;
            while (n % i == 0) {
                cnt++; // 累计质因子个数
                n /= i; //更新n
            }
            if (cnt > 1) cout << '^' << cnt; //输出i的指数
        }
    }
    return 0;
}
