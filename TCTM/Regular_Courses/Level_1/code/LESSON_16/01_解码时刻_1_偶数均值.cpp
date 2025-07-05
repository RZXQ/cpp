#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int arr[1000] = {0};
    double sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0 && arr[i] % 10 == 2) {
            sum += arr[i];
            cnt++;
        }
    }
    if (cnt) {
        double a = sum / cnt;
        printf("%.3lf\n", a);
        for (int i = 0; i < n; i++) {
            if (arr[i] < a) printf("%d ", arr[i]);
        }
    } else printf("NO\n");
    return 0;
}
