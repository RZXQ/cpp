#include <iostream>
using namespace std;

int main() {
    int n;
    int num;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        int g = num % 10;
        int s = num / 10 % 10;
        int b = num / 100 % 10;
        int q = num / 1000;
        if (g - s - b - q > 0) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
