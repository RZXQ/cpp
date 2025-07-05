#include <iostream>
using namespace std;

int main() {
    //判断分数等级
    int x;
    cin >> x;
    char ch;
    switch (x / 10) {
        case 10:
        case 9:
            ch = 'A';
            break;
        case 8:
        case 7:
            ch = 'B';
            break;
        case 6:
            ch = 'C';
            break;
        default:
            ch = 'D';
            break;
    }

    cout << ch << endl;
    return 0;
}
