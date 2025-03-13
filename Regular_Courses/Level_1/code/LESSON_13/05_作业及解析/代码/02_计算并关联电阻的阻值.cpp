#include <bits/stdc++.h>
using namespace std;

int main() {
    //计算并联电阻的阻值
    double r1, r2, sum;
    cin >> r1 >> r2;
    sum = 1 / (1 / r1 + 1 / r2);
    printf("%.2lf", sum);

    return 0;
}
