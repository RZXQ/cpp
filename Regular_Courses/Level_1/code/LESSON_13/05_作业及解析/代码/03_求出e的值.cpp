#include <bits/stdc++.h>
using namespace std;

int main() {
    //求出e的值
    int n;
    cin >> n;
    double sum = 1, e = 1;
    for (int i = 1; i <= n; i++) {
        sum *= i;
        e += 1 / sum;
    }
    printf("%.10lf", e);
    return 0;
}
