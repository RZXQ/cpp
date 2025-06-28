#include<bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i <= 20; i++) {
        //遍历公鸡的数量
        for (int j = 0; j <= 33; j++) {
            //遍历母鸡的数量
            int k = 100 - i - j; //计算小鸡的数量
            if (i * 5 + j * 3 + k / 3 == 100 && k % 3 == 0) {
                cout << i << " " << j << " " << k << endl;
            }
        }
    }
    return 0;
}
