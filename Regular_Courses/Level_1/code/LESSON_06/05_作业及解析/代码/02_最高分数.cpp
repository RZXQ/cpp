#include <iostream>
using namespace std;

int main() {
    int m, max = 0;
    for (int i = 0; i < 5; i += 1) {
        cin >> m;
        if (max < m)
            max = m;
    }
    cout << max;
    return 0;
}
