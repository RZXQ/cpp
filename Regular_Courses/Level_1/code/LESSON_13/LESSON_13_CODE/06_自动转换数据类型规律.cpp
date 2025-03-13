#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    float a = 5 + 6 + 3.4f;
    printf("%f\n", a);
    double b = 3 + 3.5f + 4.5;
    printf("%lf\n", b);
    float c = 3 + 0.5f + 'a';
    printf("%f\n", c);
    double d = 'C' + 1.5;
    printf("%lf", d);


    return 0;
}
