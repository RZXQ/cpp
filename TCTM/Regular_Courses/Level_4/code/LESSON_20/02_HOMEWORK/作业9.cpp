#include <iostream>
#include <algorithm>
using namespace std;
const int MAX_N = 110;
int arrA[MAX_N], arrB[MAX_N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arrA[i]; //初始序列
    }
    for (int i = 0; i < n; i++) {
        cin >> arrB[i]; //经过若干轮迭代后的序列
    }
    int k = 1;
    while (k < n && arrB[k] >= arrB[k - 1])k++;
    int j = k;
    while (j < n && arrA[j] == arrB[j])j++;
    if (j == n) {
        printf("insertion Sort\n");
        sort(arrB, arrB + k + 1);
    } else {
        printf("Merge Sort\n");
        int step = 1;
        bool flag = true;
        while (flag) {
            step *= 2;
            for (int i = 0; i < n; i += step) {
                int m = min(i + step, n);
                for (int j = i + 1; j < m; j++) {
                    if (arrB[j] < arrB[j - 1]) {
                        flag = false;
                        break;
                    }
                }
                if (!flag) {
                    sort(arrB + i, arrB + m);
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        printf("%d", arrB[i]);
    }
    return 0;
}
