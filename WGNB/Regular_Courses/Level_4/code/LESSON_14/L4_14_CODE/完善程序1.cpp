#include <iostream>
using namespace std;
const int MAXN = 1000000;
int F[MAXN];

int main() {
    int n;
    cin >> n;
    int i = 0, p = 0, c = 0;
    while (c < n - 1) {
        if (F[i] == 0) {
            if (p) {
                F[i] = 1;
                c++;
            }
            p ^= 1;
        }
        i = (i + 1) % n;
    }
    int ans = -1;
    for (int i = 0; i < n; i++)
        if (F[i] == 0)
            ans = i;
    cout << ans << endl;
    return 0;
}
