#include<iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    if (x % 2 == 1 && y % 2 == 0) cnt = (y - x + 1) / 2;
    else cnt = (y - x + 1) / 2 + 1;
    cout << cnt;
    return 0;
}
