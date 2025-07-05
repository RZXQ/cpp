#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long s = n;
    long long day1 = 0, day2 = 0;
    while (s > 0) {
        day1++;
        long long ac = 0;
        for (long long i = 1; i <= s; i += 3) {
            ac++;
            if (day2 == 0 && i == s) {
                day2 = day1;
            }
        }
        s -= ac;
    }
    cout << day1 << " " << day2;
    return 0;
}
