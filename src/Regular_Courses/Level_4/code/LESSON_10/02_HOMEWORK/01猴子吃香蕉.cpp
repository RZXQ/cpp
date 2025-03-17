#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    int day = 0;
    while (n) {
        if (n % 2 != 0) {
            cnt++;
            n--;
        } else {
            n /= 2;
            day++;
        }
        if (n == 1) {
            cnt++;
            break;
        }
    }
    cout << day << " " << cnt;


    return 0;
}
