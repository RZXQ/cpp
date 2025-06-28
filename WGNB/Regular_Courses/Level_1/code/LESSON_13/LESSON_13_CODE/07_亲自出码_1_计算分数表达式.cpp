#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a = 1; //保存第一项
    int b = 1; //保存第二项
    int c = 0; //保存第三项
    double sum = 1.0 / 1 + 1.0 / 1;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        sum += 1.0 / i;
        a = b;
        b = c;
    }
    //cout<<fixed<<setprecision(3)<<sum;
    printf("%.3lf", sum);

    return 0;
}
