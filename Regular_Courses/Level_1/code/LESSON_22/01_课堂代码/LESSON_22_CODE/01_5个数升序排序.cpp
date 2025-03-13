#include <iostream>
using namespace std;

int main() {
    //5个数升序排序
    int a[5] = {77, 45, 26, 86, 9};
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
