#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100] = {0};
    int max_n = -1000000;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (max_n < arr[i]) max_n = arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == max_n) continue;
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
