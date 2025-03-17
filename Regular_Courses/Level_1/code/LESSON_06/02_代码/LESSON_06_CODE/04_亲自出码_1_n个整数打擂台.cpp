#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxn;
    cin >> maxn;
    int a;
    for (int i = 1; i <= n - 1; i += 1) {
        cin >> a;
        if (maxn < a) maxn = a;
    }
    cout << maxn;
    return 0;
}
