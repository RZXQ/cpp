#include<bits/stdc++.h>
using namespace std;

void f(int m) {
    if (m == 4) {
        //递归出口
        cout << "4,5-->9,10" << endl;
        cout << "8,9-->4,5" << endl;
        cout << "2,3-->8,9" << endl;
        cout << "7,8-->2,3" << endl;
        cout << "1,2-->7,8" << endl;
        return;
    }
    cout << m << ',' << m + 1 << "-->" << m * 2 + 1 << ',' << m * 2 + 2 << endl;
    cout << m * 2 - 1 << ',' << m * 2 << "-->" << m << ',' << m + 1 << endl;
    f(m - 1);
}

int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}
