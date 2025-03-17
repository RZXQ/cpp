#include <bits/stdc++.h>
using namespace std;

int main() {
    float r, a, b;
    scanf("%f %f %f", &r, &a, &b);
    int n = 0;
    while (a <= b) {
        a = a + a * r / 100;
        n++;
    }
    printf("%d %.2f", n, a);
    return 0;
}
