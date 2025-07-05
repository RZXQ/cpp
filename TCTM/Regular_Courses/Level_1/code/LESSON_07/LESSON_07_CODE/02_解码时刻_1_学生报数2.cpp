#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n = 0;
    for (int i = 1; i <= 100; i++) {
        cout << i << endl;
        sum += i;
        n++;
        if (sum >= 1000)
            break;
    }
    cout << sum << endl;
    cout << n;
    return 0;
}
