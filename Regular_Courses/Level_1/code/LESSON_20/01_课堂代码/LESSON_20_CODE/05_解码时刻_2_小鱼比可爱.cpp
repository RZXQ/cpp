#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100] = {0};
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = i - 1; j >= 0; j--) {
            if (a[j] < a[i])
                cnt++;
        }
        cout << cnt << " ";
        cnt = 0;
    }
    return 0;
}
