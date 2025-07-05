#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[101] = {}, vis[101] = {};
    int n, ans = 0; //正整数个数
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int sum = a[i] * a[j]; //积
            for (int k = 1; k <= n; k++) {
                //判断积是否再集合内
                if (sum == a[k] && vis[k] == 0) {
                    ans++;
                    vis[k] = 1;
                }
            }
        }
    }
    cout << ans;
    return 0;
}

/*
20
13 78 35 90 74 73 89 12 27 6 69 57 98 58 2 75 46 53 26 24
*/
