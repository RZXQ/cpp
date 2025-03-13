#include <iostream>
using namespace std;
int a[100000];

void qsort(int left, int right) {
    if (left >= right) return;
    int x = a[left], i = left, j = right;
    while (i < j) {
        while (i < j && a[j] <= x) j--;
        a[i] = a[j];
        while (i < j && a[i] >= x) i++;
        a[j] = a[i];
    }
    a[i] = x;
    qsort(left, i - 1);
    qsort(i + 1, right);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    qsort(1, n);
    for (int i = 1; i <= k; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
