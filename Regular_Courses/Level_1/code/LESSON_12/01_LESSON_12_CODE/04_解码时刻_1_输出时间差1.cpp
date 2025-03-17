#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    if (s2 < s1) {
        m2--;
        s2 += 60;
    }
    int s = s2 - s1;
    if (m2 < m1) {
        h2--;
        m2 += 60;
    }
    int m = m2 - m1;
    int h = h2 - h1;
    //	printf("%02d:%02d:%02d", h, m, s);
    cout << setw(2) << setfill('0') << h << ':';
    cout << setw(2) << setfill('0') << m << ':';
    cout << setw(2) << setfill('0') << s;

    return 0;
}
