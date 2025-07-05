#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cout << max(5, 10) << endl;
    cout << max(3.14, 5.8) << endl;
    cout << max('A', 'C') << endl;
    cout << max(max(7, 9), 12) << endl;
    cout << min(5, 10) << endl;
    cout << min(3.14, 5.8) << endl;
    cout << min('A', 'C') << endl;
    cout << min(min(7, 9), 12) << endl;
    return 0;
}
