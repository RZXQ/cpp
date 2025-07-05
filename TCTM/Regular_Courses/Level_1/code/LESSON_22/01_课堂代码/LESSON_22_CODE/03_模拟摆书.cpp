#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[5] = {0};
    int x;
    for (int i = 0; i < 5; i++) {
        cin >> x;
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (a[j] > x)
                a[j + 1] = a[j];
            else break;
        }
        a[j + 1] = x;
    }

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}
