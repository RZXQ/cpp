#include<iostream>
using namespace std;
int nums[505][505];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> nums[i][j];
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (nums[i][j] == nums[i + 1][j] && i < n)cnt++;
            if (nums[i][j] == nums[i][j + 1] && j < m)cnt++;
        }
    }

    cout << cnt;

    return 0;
}
