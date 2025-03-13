1
#include <iostream>
2
#include <cstring>
3
using namespace std;
4
const int SIZE = 25;
5
bool used[SIZE];
6
int d[SIZE];
7
int n, m, i, j, k;
8
bool flag;
9
int main() {
    10
    cin >> n >> m;
    11
    memset(used, false, sizeof(used));
    12
    for (i = 1; i <= m; i++) {
        13
        d[i] = i;
        14
        used[i] = true;
        15
    }
    16
    flag = true;
    17
    while (flag) {
        18
        for (i = 1; i <= m - 1; i++) cout << d[i] << " ";
        19
        cout << d[m] << endl;
        20
        flag = false;
        21
        for (i = m; i >= 1; i--) {
            22
            used[d[i]] = false;
            23
            for (j = d[i] + 1; j <= n; j++)
                24
            if (!used[j]) {
                25
                used[j] = true;
                26
                d[i] = j;
                27
                flag = true;
                28
                break;
                29
            }
            30
            if (flag) {
                31
                for (k = i + 1; k <= m; k++)
                    32
                for (j = 1; j <= n; j++)
                    33
                if (!used[j]) {
                    34
                    d[k] = j;
                    35
                    used[j] = true;
                    36
                    break;
                    37
                }
                38
                break;
                39
            }
            40
        }
        41
    }
    42
    return 0;
    43
}
