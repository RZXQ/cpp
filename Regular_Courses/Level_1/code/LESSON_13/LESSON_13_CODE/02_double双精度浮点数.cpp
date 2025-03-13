#include <bits/stdc++.h>
using namespace std;

int main() {
    double money[4] = {100000.11, 100000.11, 100000.11, 100000.11};
    double total = 0;
    for (int i = 0; i < 4; i++) {
        total += money[i];
    }
    printf("total:%lf", total);
    printf("total:%lg", total);
    return 0;
}
