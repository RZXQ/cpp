#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool isSquare(int num) {
    int i = 1;
    int bound = (int) floor(sqrt(num));
    for (; i <= bound; ++i) {
        if (num == i * i) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    if (isSquare(n)) {
        cout << n << " is a square number" << endl;
    } else {
        cout << n << " is not a square number" << endl;
    }
    return 0;
}
