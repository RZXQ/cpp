#include<bits/stdc++.h>
using namespace std;

void fun(int n) {
    if (n > 1)
        fun(n - 1);
    cout << n << ' ';
}

int main() {
    fun(10);
    return 0;
}
