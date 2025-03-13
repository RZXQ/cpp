#include <iostream>
using namespace std;
const int MAXN = 1000;
int n, i, lbound, rbound, mid, m, count;
int x[MAXN];

int main() {
    cin >> n >> m;
    for (i = 0; i < n; i++)
        cin >> x[i];
    lbound = 0;
    rbound = m;
    while (lbound < rbound) {
        mid = (lbound + rbound) / 2;
        count = 0;
        for (i = 0; i < n; i++)
            if (x[i] > mid)
                count++;
        if (count > n / 2)
            lbound = mid + 1;
        else
            rbound = mid;
        cout << mid << " " << lbound << " " << rbound << " " << count << endl;
    }
    cout << rbound << endl;
    return 0;
}
