#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int a[6], b[6];
    int s = 0;
    while (x != 0) {
        a[s] = x % 10;
        b[s] = x % 10;
        s++;
        x /= 10;
    }
    for (int i = 0; i < s - 1; i++) {
        for (int j = 0; j < s - 1; j++) {
            if (a[j] < a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    int max = 0;
    for (int i = 0; i < s; i++) {
        for (int j = i; j < s - 1; j++) {
            a[i] *= 10;
        }
        max += a[i];
    }

    for (int i = 0; i < s - 1; i++) {
        for (int j = 0; j < s - 1; j++) {
            if (b[j] > b[j + 1]) {
                swap(b[j], b[j + 1]);
            }
        }
    }
    int min = 0;
    for (int i = 0; i < s; i++) {
        for (int j = i; j < s - 1; j++) {
            b[i] *= 10;
        }
        min += b[i];
    }

    cout << max - min;


    return 0;
}
