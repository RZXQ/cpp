#include <iostream>
using namespace std;

int func(int a) {
    a++;
    return a;
}

int main() {
    int a = 2;
    cout << func(a) << endl;
    cout << a << endl;
    int b = 1;
    cout << b << endl;
    return 0;
}
