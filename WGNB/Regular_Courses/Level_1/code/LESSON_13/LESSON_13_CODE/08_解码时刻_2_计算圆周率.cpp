#include <bits/stdc++.h>
using namespace std;

int main() {
    double pi = 0.0;
    int d = 4;
    int n = 1;
    for (int i = 1; i < 500001; i++) {
        if (i % 2 == 1) pi += double(d) / n;
        else pi -= double(d) / n;
        n += 2;
    }
    printf("%.6lf", pi);


    return 0;
}
