#include <bits/stdc++.h>
using namespace std;

int main() {
    //白细胞计数
    int n;
    cin >> n;
    double arr[301] = {0};
    double max_n = -99999, min_n = 99999;
    int max_i = 0, min_i = n;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (max_n < arr[i]) {
            max_n = arr[i];
            max_i = i;
        }
        if (min_n > arr[i]) {
            min_n = arr[i];
            min_i = i;
        }
        sum += arr[i];
    }
    double avg = (sum - max_n - min_n) / (n - 2);
    double avg_dis = -99999;
    for (int i = 0; i < n; i++) {
        if (min_i == i || max_i == i) continue;
        double d1 = avg - arr[i];
        double d2 = arr[i] - avg;
        double max_d = d1 > d2 ? d1 : d2;
        if (max_d > avg_dis) avg_dis = max_d;
    }
    printf("%.2lf %.2lf", avg, avg_dis);
    return 0;
}
