#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    int n;
    cin >> n;
    int summ = 0, sumw = 0;
    double height;
    double m[40], w[40];
    for (int i = 0; i < n; i++) {
        cin >> a >> height;
        if (a == "male") {
            m[++summ] = height;
        }
        if (a == "female") {
            w[++sumw] = height;
        }
    }
    for (int i = 1; i <= summ; i++) {
        for (int j = 1; j < summ; j++) {
            if (m[i] < m[j]) {
                swap(m[i], m[j]);
            }
        }
    }
    for (int i = 1; i <= sumw; i++) {
        for (int j = 1; j < sumw; j++) {
            if (w[i] > w[j]) {
                swap(w[i], w[j]);
            }
        }
    }
    for (int i = 1; i <= summ; i++) {
        cout << fixed << setprecision(2) << m[i] << " ";
    }
    for (int i = 1; i <= sumw; i++) {
        cout << fixed << setprecision(2) << w[i] << " ";
    }

    return 0;
}
