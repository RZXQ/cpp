#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
    const double pi = 3.14159;
    double s = 0, a = 0, b = 0, c = 0;
    cin >> s;
    a = round(pi * s);
    c = pi * a;
    swap(a, c);
    b = c + ceil(a);
    printf("%.4lf", b);
    return 0;
}
