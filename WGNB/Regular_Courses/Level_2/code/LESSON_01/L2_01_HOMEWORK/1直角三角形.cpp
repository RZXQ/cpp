#include<bits/stdc++.h>
using namespace std;

int main() {
    int c;
    cin >> c;
    //遍历a边的值
    for (int i = 1; i <= c; i++) {
        //遍历b边的值
        for (int j = 1; j <= c; j++) {
            if (i * i + j * j == c * c) {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    return 0;
}
