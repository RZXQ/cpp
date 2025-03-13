#include <bits/stdc++.h>
using namespace std;

int main() {
    float price[5] = {28.9, 32.75, 45.6, 78.0, 35.7};
    int num;
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        sum += num * price[i];
    }
    cout << fixed << setprecision(2) << sum << endl;
    //	printf("%.2f",sum);

    return 0;
}
