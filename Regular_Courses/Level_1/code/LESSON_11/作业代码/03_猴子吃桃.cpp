#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 1;
    while (n > 1) {
        a = (a + 1) * 2;
        n--;
    }
    cout << a;
    return 0;
}
