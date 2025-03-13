#include <iostream>
#include <cstring>
using namespace std;
const int SIZE = 5;
bool used[SIZE];
int d[SIZE];
int n, m, i, j, k;
bool flag;

int main() {
    cin >> n >> m;
    memset(used, false, sizeof(used));
    for (i = 1; i <= m; i++) {
        d[i] = i;
        used[i] = true;
    }
    flag = true;
    while (flag) {
        for (i = 1; i <= m - 1; i++) cout << d[i] << " ";
        cout << d[m] << endl;
        flag = false;
        for (i = m; i >= 1; i--) {
            used[d[i]] = false;
            for (j = d[i] + 1; j <= n; j++)
                if (!used[j]) {
                    used[j] = true;
                    d[i] = j;
                    flag = true;
                    break;
                }
            if (flag) {
                for (k = i + 1; k <= m; k++)
                    for (j = 1; j <= n; j++)
                        if (!used[j]) {
                            d[k] = j;
                            used[j] = true;
                            break;
                        }
                break;
            }
        }

        //		for(int i = 1; i <= m; i++){
        //			cout << d[i] << ' ';
        //		}
        //		cout << endl;
        //		for(int i = 1; i <= m; i++){
        //			cout << used[i] << ' ';
        //		}
        //		cout << endl;
    }
    return 0;
}
