#include<iostream>
#include<vector>
using namespace std;

int compute(vector<int> &cost) {
    int n = cost.size();
    vector<int> dp(n + 1, 0);
    dp[1] = cost[0];
    for (int i = 2; i <= n; i++) {
        dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i - 1];
    }
    return min(dp[n], dp[n - 1]);
}

int main() {
    int n;
    cin >> n;
    vector<int> cost(n);
    for (int i = 0; i < n; i++)
        cin >> cost[i];
    cout << compute(cost) << endl;
    return 0;
}
