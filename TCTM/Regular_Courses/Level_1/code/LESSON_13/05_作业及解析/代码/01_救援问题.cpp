#include <bits/stdc++.h>
using namespace std;

int main() {
    //救援问题
    int n;
    cin >> n;
    double t = 0;
    for (int i = 0; i < n; i++) {
        double x1, y1;
        int n2;
        cin >> x1 >> y1 >> n2;
        double dis = sqrt(x1 * x1 + y1 * y1);
        t += (dis / 50 * 2 + n2 * 1 + n2 * 0.5);
    }
    cout << ceil(t);
    return 0;
}
