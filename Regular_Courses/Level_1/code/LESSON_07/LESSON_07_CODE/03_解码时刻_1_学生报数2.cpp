#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;
    for (; i <= 100; i++) {
        cout << i << endl;
        sum += i;
        if (sum >= 1000)
            break;
    }
    cout << sum << endl;
    cout << i;
    return 0;
}
