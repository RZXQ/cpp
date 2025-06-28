#include<bits/stdc++.h>
using namespace std;

int myMax(double a, double b, double c) {
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int main() {
    double a, b, c, de, mo;
    cin >> a >> b >> c;
    de = myMax(a, b, c);
    mo = myMax(a + b, b, c) * myMax(a, b, b + c);
    printf("%.3lf", de / mo);
    return 0;
}
