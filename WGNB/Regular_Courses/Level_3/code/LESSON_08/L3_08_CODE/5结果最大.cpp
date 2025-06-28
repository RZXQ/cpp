#include<bits/stdc++.h>
using namespace std;
string a[101];

void qsort(int left, int right) {
    if (left >= right) return;
    string x = a[left];
    int i = left, j = right;
    while (i < j) {
        while (i < j && a[j] + x <= x + a[j]) j--;
        a[i] = a[j];
        while (i < j && a[i] + x >= x + a[i]) i++;
        a[j] = a[i];
    }
    a[i] = x;
    qsort(left, i - 1);
    qsort(i + 1, right);
}

int main() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    qsort(1, n);
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    return 0;
}
