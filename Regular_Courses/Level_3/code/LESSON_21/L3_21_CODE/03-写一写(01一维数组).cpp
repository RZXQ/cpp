#include<bits/stdc++.h>
using namespace std;
int w[5] = {0, 2, 3, 7, 4}; //物品重量
int v[5] = {0, 1, 3, 9, 5}; //物品价值
int dp[11]; //列表示容量
int main() {
    for (int i = 1; i <= 4; i++) {
        //物品编号
        for (int j = 10; j >= w[i]; j--) {
            //容量
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    cout << dp[10] << endl;
    return 0;
}
