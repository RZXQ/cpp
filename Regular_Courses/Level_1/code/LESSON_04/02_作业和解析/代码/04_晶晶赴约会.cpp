#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;
    switch (day) {
        case 1:
        case 3:
        case 5:
            cout << "NO";
            break;
        default:
            cout << "YES";
            break;
    }
    return 0;
}
