#include <iostream>
using namespace std;

int main() {
    //数组逆序重存放
    int n;
    cin >> n;
    int arr[100] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << ' ';
    }
    return 0;
}
