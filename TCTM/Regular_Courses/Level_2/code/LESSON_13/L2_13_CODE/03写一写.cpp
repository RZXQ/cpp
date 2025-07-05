#include<bits/stdc++.h>
using namespace std;

void fun(int *a, int *b) {
    int x = 0;
    x = *a;
    *a = *b;
    *b = x;
}

int main() {
    int a = 5, b = 6;
    int *pa = &a, *pb = &b;
    //变量a、b值的交换
    fun(pa, pb);
    cout << a << " " << b << endl;
    return 0;
}
