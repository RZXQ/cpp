#include <bits/stdc++.h>
using namespace std;

int main() {
    char id;
    int flag = 0;
    double x, d;
    scanf("%c", &id);
    scanf("%lf", &x);
    if (id == 'V') {
        if (x <= 500)d = 0.85;
        else if (x <= 1000)d = 0.8;
        else {
            d = 0.75;
            flag = 1;
        }
    } else {
        d = 0.9;
        if (x > 500) flag = 1;
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    printf("%.2lf", x * d);
    return 0;
}
