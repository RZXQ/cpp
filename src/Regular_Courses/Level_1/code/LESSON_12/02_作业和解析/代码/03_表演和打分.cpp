#include <bits/stdc++.h>
using namespace std;

int main() {
    //表演和打分
    int arr[10] = {0};
    int max_s = 0;
    int min_s = 100;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (max_s < arr[i]) max_s = arr[i];
        if (min_s > arr[i]) min_s = arr[i];
    }
    float sum = 0;
    for (int i = 0; i < 10; i++) sum += arr[i];
    cout << fixed << setprecision(3) << (sum - max_s - min_s) / 8;

    return 0;
}
