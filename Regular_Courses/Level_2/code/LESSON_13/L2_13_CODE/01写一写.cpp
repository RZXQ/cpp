#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;
    int *p;
    p = &a;
    cout << *p << endl;
    p = &b;
    cout << *p << endl;
    p = &c;
    cout << *p;
    return 0;
}
