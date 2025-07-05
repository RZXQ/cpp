#include <iostream>
using namespace std;

int sumAmi(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int a = 1;
    while (true) {
        int b = sumAmi(a);
        int c = sumAmi(b);
        if (c == a && a != b) {
            cout << a << " " << b << endl;
            break;
        }
        a++;
    }
    return 0;
}
