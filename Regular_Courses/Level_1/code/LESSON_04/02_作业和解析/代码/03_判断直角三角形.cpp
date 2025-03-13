#include <iostream>
using namespace std;

int main() {
    //	int a, b, c;
    //	cin >> a >> b >> c;
    //	if (a + b > c || a + c > b || b + c > a) {
    //		if (b * b + c * c == a * a) {
    //			cout << b * c / 2;
    //		} else {
    //			cout << "no";
    //		}
    //	}


    int a, b, c;
    cin >> a >> b >> c;
    if (b * b + c * c == a * a) {
        cout << b * c / 2;
    } else {
        cout << "no";
    }

    return 0;
}
