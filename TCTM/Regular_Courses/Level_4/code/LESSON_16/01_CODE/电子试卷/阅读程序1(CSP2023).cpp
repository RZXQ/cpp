1
#include <iostream>
2
#include <cmath>
3
using namespace std;
4
int solve1(int n) {
    5
    return n * n;
    6
}

7
int solve2(int n) {
    8
    int sum = 0;
    9
    for (int i = 1; i <= sqrt(n); i++) {
        10
        if (n % i == 0) {
            11
            if (n / i == i) {
                12
                sum += i * i;
                13
            } else {
                14
                sum += i * i + (n / i) * (n / i);
                15
            }
            16
        }
        17
    }
    18
    return sum;
    19
}

20
int main() {
    21
    int n;
    22
    cin >> n;
    23
    cout << solve2(solve1(n)) << " " << solve1(solve2(n)) << endl;
    24
    return 0;
    25
}
