#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[101] = {}, vis[101] = {};
    int n, ans = 0; //正整数个数
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) {
        //被加数
        for (int j = i + 1; j <= n; j++) {
            //加数
            int sum = a[i] + a[j]; //和
            for (int k = 1; k <= n; k++) {
                //判断和是否再集合内
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
