#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    long long n1 = n;
    int cnt = 0;
    while (n1 > 1) {
        if (n1 % 2 == 1) n1 = n1 * 3 + 1;
        else n1 /= 2;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}
