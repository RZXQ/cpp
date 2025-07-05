#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    //从最小质因数开始验证，寻找n的因数
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            //求较大质因数
            cout << n / i;
            break;
        }
    }
    return 0;
}
