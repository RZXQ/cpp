#include <iostream>
using namespace std;

int main() {
    //求分数序列和
    int n;
    cin >> n;
    float p1 = 1, q1 = 2;
    float sum = 0;
    int temp = 0;
    for (int i = 0; i < n; i++) {
        sum += q1 / p1;
        temp = q1;
        q1 = q1 + p1;
        p1 = temp;
    }
    printf("%.4f", sum);


    return 0;
}
