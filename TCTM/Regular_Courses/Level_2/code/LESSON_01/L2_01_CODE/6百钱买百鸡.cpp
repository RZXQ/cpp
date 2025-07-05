#include<bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i <= 100; i++) {
        //遍历公鸡的数量
        for (int j = 0; j <= 100; j++) {
            //遍历母鸡的数量
            for (int k = 0; k <= 100; k++) {
                //遍历小鸡的数量
                if (i * 5 + j * 3 + k / 3 == 100 && i + j + k == 100 && k % 3 == 0) {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }
    return 0;
}
