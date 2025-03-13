#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    float a = 3.14;
    if (a == 3.14)
        printf("a等于3.14\n");
    else
        printf("a不等于3.14\n");

    printf("%.20f\n", a);
    printf("%.20f\n", 3.14);


    return 0;
}
