#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, t = 0;
    cin >> num;
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            t++;
            num /= i;
        }
        if (num <= 1) break;
    }
    if (num > 1) t++;
    cout << t;
    return 0;
}
