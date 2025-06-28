1
#include<bits/stdc++.h>
2
#include<vector>
3
using namespace std;
4
bool isSquare(int num) {
    5
    int i = ___①___;
    6
    int bound = ___②___;
    7
    for (; i <= bound; ++i) {
        8
        if (___③___) {
            9
            return ___④___;
            10
        }
        11
    }
    12
    return ___⑤___;
    13
}

14
int main() {
    15
    int n;
    16
    cin >> n;
    17
    if (isSquare(n)) {
        18
        cout << n << " is a square number" << endl;
        19
    } else {
        20
        cout << n << " is not a square number" << endl;
        21
    }
    22
    return 0;
    23
}
