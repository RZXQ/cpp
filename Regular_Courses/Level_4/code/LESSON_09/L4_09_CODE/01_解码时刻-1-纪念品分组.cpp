#include<bits/stdc++.h>
using namespace std;
int p[30010];

int main() {
    int w, n;
    cin >> w >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    sort(p + 1, p + n + 1);
    int ans = 0;
    int i = 1, j = n;
    while (i <= j) {
        if (p[i] + p[j] <= w) {
            i++;
            j--;
        } else {
            j--;
        }
        ans++;
    }
    cout << ans;
    return 0;
}
