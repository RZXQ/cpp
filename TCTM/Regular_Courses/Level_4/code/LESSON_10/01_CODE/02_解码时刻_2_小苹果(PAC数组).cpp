#include <bits/stdc++.h>
using namespace std;
int vis[10000010];

int main() {
    long long n;
    cin >> n;
    long long s = n;
    long long day1 = 0, day2 = 0;
    while (s > 0) {
        day1++;
        long long i = 1;
        while (vis[i]) i++;
        s--;
        vis[i] = 1;
        if (i == n) day2 = day1;
        long long k = 0;
        for (long long j = i + 1; j <= n; j++) {
            if (vis[j] == 0) k++;
            if (k > 2) {
                s--;
                vis[j] = 1;
                k = 0;
                if (j == n) day2 = day1;
            }
        }
    }
    cout << day1 << " " << day2;
    return 0;
}
