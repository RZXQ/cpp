#include <bits/stdc++.h>
using namespace std;

int main() {
    //外层控制行，范围1~5
    for (int i = 1; i <= 5; i++) {
        //内层控制列，范围1~i
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
