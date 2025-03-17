#include <bits/stdc++.h>
using namespace std;

int main() {
    //年龄和疾病
    int n;
    cin >> n;
    int num;
    float c_cnt = 0, y_cnt = 0, a_cnt = 0, o_cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num >= 61) o_cnt++;
        else if (num >= 36) a_cnt++;
        else if (num >= 19) y_cnt++;
        else c_cnt++;
    }
    cout << fixed << setprecision(2) << c_cnt / n * 100 << '%' << endl;
    cout << fixed << setprecision(2) << y_cnt / n * 100 << '%' << endl;
    cout << fixed << setprecision(2) << a_cnt / n * 100 << '%' << endl;
    cout << fixed << setprecision(2) << o_cnt / n * 100 << '%' << endl;

    return 0;
}
