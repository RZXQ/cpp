#include <iostream>
using namespace std;
int a[11], n, ans = -1;

void swap(int &a, int &b) {
    int c;
    c = a;
    a = b;
    b = c;
}

int FindKth(int left, int right, int n) {
    int tmp, value, i, j;
    if (left == right) return left;
    tmp = rand() % (right - left) + left;
    swap(a[tmp], a[left]);
    value = a[left];
    i = left;
    j = right;
    while (i < j) {
        while (i < j && a[j] <= value) j--;
        if (i < j) {
            a[i] = a[j];
            i++;
        } else break;
        while (i < j && a[i] >= value) i++;
        if (i < j) {
            a[j] = a[i];
            j--;
        } else break;
    }
    a[i] = value;
    if (i < n) return FindKth(i + 1, right, n);
    if (i > n) return FindKth(left, i - 1, n);
    return i;
}

int main() {
    int i;
    int m;
    cin >> m;
    for (i = 1; i <= m; i++)
        cin >> a[i];
    cin >> n;
    ans = FindKth(1, m, n);
    cout << a[ans];
    return 0;
}
