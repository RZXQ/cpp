#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[20];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] < a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl << sum;

    return 0;
}
