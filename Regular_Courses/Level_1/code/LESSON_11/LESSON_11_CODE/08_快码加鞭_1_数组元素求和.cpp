#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    //循环接收数组元素
    int a[1000] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //记录相加的数组元素的下标
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        cout << a[start] + a[end] << " ";
        start++;
        end--;
    }
    return 0;
}
