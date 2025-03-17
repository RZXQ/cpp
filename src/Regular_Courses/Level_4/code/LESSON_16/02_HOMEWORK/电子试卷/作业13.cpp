1
#include <iostream>
2
#include <cmath>
3
using namespace std;
4
int main() {
    5
    int num, t = 0;
    6
    cin >> num;
    7
    for (int i = 2; i <= num; i++) {
        8
        while (num % i == 0) {
            9
            t++;
            10
            num /= i;
            11
        }
        12
        if (num <= 1) break;
        13
    }
    14
    if (num > 1) t++;
    15
    cout << t;
    16
    return 0;
    17
}
