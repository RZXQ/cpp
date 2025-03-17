#include <iostream>
using namespace std;

int main() {
    //最大值和最小值的差
    int m;
    cin >> m;
    int arr[10000] = {0};
    int min_m = 10000;
    int max_m = -10000;
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
        if (min_m > arr[i]) min_m = arr[i];
        if (max_m < arr[i]) max_m = arr[i];
    }
    cout << max_m - min_m;


    return 0;
}
