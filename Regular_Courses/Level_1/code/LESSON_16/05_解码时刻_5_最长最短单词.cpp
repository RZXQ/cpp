#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    int sum = 0, max = 0, min = 100, maxi = 0, mini = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != ' ' && a[i] != ',' && a[i] != '.') {
            sum++;
        } else {
            if (sum > max) {
                max = sum;
                maxi = i;
            }
            if (sum < min) {
                min = sum;
                mini = i;
            }
            sum = 0;
        }
    }
    for (int i = maxi - max; i < maxi; i++) cout << a[i];
    cout << endl;
    for (int i = mini - min; i < mini; i++) cout << a[i];
    return 0;
}
