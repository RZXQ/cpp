#include<iostream>
using namespace std;
int arr[20][20] = {1};

int main() {
    int n;
    cin >> n;
    cout << 1 << endl;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
