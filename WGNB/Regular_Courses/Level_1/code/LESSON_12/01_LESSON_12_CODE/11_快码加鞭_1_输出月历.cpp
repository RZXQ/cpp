#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    int m;
    cin >> m;

    cout << 'S';
    cout << setw(5) << 'M';
    cout << setw(5) << 'T';
    cout << setw(5) << 'W';
    cout << setw(5) << 'T';
    cout << setw(5) << 'F';
    cout << setw(5) << 'S' << endl;

    int dayNum[] = {-1, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int o = 3;
    for (int i = 1; i < m; i++) o = (o + dayNum[i]) % 7;
    for (int i = 1; i <= o; i++) cout << setw(5) << ' ';

    for (int i = 1; i <= dayNum[m]; i++) {
        cout << i;
        if ((o + i) % 7 == 0) cout << endl;
        else {
            if (i < 10) cout << setw(4) << ' ';
            else cout << setw(3) << ' ';
        }
    }


    return 0;
}
