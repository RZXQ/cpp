#include <iostream>
using namespace std;

int main() {
    //药房管理
    int m;
    cin >> m;
    int n;
    cin >> n;
    int num;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        if (m >= num) m -= num;
        else cnt++;
    }
    cout << cnt;


    return 0;
}
