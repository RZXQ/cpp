#include<bits/stdc++.h>
using namespace std;

struct node {
    string name;
    int c;
    int m;
    int e;
    double avg;
    string note;
} a[100010];

node b[10005];

void merge(long long L, int R) {
    long long mid = (L + R) / 2, t = 0, first = L, second = mid + 1;
    while (first <= mid && second <= R) {
        if (a[first].avg >= a[second].avg) {
            b[t++] = a[first++];
        } else {
            b[t++] = a[second++];
        }
    }
    while (first <= mid) b[t++] = a[first++];
    while (second <= R) b[t++] = a[second++];
    for (int i = 0; i < R - L + 1; i++) a[L + i] = b[i];
}

void mergeSort(long long L, long long R) {
    long long mid = (L + R) / 2;
    if (mid > L) mergeSort(L, mid);
    if (mid + 1 < R) mergeSort(mid + 1, R);
    merge(L, R);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].c >> a[i].m >> a[i].e;
        double avg = (a[i].c + a[i].m + a[i].e) / 3.0;
        a[i].avg = avg;
        if (a[i].avg > 95) a[i].note = "excellent";
        else if (a[i].avg > 60) a[i].note = "good";
        else a[i].note = "bad";
    }
    int m;
    cin >> m;
    mergeSort(0, n - 1);
    for (int i = 0; i < m; i++) {
        cout << a[i].name << ' ' << a[i].note << ' ';
        cout << fixed << setprecision(2) << a[i].avg << endl;
    }
    return 0;
}
