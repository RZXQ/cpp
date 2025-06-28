#include <iostream>
using namespace std;

int main() {
    //码上得知：5个数升序排序
    int a[5] = {77, 45, 26, 86, 9};
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for (int i = 0; i < 5; i++) cout << a[i] << " ";


    return 0;
}
