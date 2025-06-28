#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            //输出数学算式
            cout << j << "*" << i << "=" << j * i << " ";
        }
        cout << endl;
    }
    return 0;
}
