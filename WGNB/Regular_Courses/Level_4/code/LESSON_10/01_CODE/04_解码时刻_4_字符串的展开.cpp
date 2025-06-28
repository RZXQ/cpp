#include <bits/stdc++.h>
using namespace std;

int main() {
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    string a, b;
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '-' && i > 0 && i < a.size() - 1 &&
            ((isdigit(a[i - 1]) && isdigit(a[i + 1]) && a[i + 1] > a[i - 1]) ||
             (isalpha(a[i - 1]) && isalpha(a[i + 1]) && a[i + 1] > a[i - 1]))) {
            int start = a[i - 1] + 1;
            int end = a[i + 1] - 1;
            if (p3 == 1) {
                for (int j = start; j <= end; j++) {
                    for (int k = 0; k < p2; k++) {
                        if (p1 == 3) {
                            b += '*';
                        } else {
                            char f = (p1 == 1) ? tolower(j) : toupper(j);
                            b += f;
                        }
                    }
                }
            } else {
                for (int j = end; j >= start; j--) {
                    for (int k = 0; k < p2; k++) {
                        if (p1 == 3) {
                            b += '*';
                        } else {
                            char f = (p1 == 1) ? tolower(j) : toupper(j);
                            b += f;
                        }
                    }
                }
            }
        } else {
            b += a[i];
        }
    }
    cout << b << endl;
    return 0;
}
