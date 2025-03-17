#include<bits/stdc++.h>
using namespace std;

int main() {
    int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int id = 0;
    int s = 0;
    int ans = 0;
    for (int i = 1; i <= 12; i++) {
        id = s + 13;
        if (id % 7 == 5) {
            ans++;
        }
        s = s + m[i];
    }
    cout << ans;
    return 0;
}
