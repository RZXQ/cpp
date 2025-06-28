#include<bits/stdc++.h>
using namespace std;
int arr[105][105] = {};

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> arr[i][j];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i][0];
    for (int i = 0; i < n; i++) sum += arr[i][n - 1];
    for (int i = 1; i < n - 1; i++) {
        sum += arr[i][i];
    }
    cout << sum;
    return 0;
}
