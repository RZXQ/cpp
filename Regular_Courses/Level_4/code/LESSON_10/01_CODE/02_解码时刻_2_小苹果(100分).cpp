#include <iostream>
#include <cmath>
using namespace std;
int n, day = 0, ans = 0;

int main() {
    long long n;
    cin >> n;
    long long day1 = 0;
    long long day2 = 0;
    long long s = n;
    while (s > 0) {
        day1++;
        if (day2 == 0 && s % 3 == 1) {
            day2 = day1;
        }
        s = s - ceil(s / 3.0);
    }
    cout << day1 << " " << day2;
    return 0;
}
