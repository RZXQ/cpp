#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int y;
    int r = 0;
    for (int x = 0; x <= c / a; x++) {
        y = (c - a * x) / b;
        if (a * x + b * y == c) {
            cout << x << " " << y << endl;
            r = 1;
        }
    }
    if (r == 0)
        cout << "no answer";
    return 0;
}
