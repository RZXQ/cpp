#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int year, month, day;
    cin >> year >> month >> day;
    cout << setw(4) << year << '-';
    cout << setw(2) << setfill('0') << month << '-';
    cout << setw(2) << setfill('0') << day;
    return 0;
}
