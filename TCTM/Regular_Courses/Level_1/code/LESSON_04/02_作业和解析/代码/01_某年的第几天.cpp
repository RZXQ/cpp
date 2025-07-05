#include <iostream>
using namespace std;

int main() {
    int year, month, day;
    cin >> year >> month >> day;
    int sum = 0;
    int feb = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 29 : 28;
    switch (month - 1) {
        case 12: sum += 31;
        case 11: sum += 30;
        case 10: sum += 31;
        case 9: sum += 30;
        case 8: sum += 31;
        case 7: sum += 31;
        case 6: sum += 30;
        case 5: sum += 31;
        case 4: sum += 30;
        case 3: sum += 31;
        case 2: sum += feb;
        case 1: sum += 31;
        default: sum += day;
    }
    cout << sum;
    return 0;
}
