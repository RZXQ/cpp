#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    int r1 = h1 * 3600 + m1 * 60 + s1;
    int r2 = h2 * 3600 + m2 * 60 + s2;
    int r3 = r2 - r1;
    int s = r3 % 60;
    int m = r3 / 60 % 60;
    int h = r3 / 60 / 60;
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}
