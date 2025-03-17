#include <iostream>
using namespace std;

int main() {
    //判断分数等级
    int x;
    cin >> x;
    char ch;
    if (x >= 90) ch = 'A';
    else if (x >= 70) ch = 'B';
    else if (x >= 60) ch = 'C';
    else ch = 'D';
    cout << ch << endl;
    return 0;
}
