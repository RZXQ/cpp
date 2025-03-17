#include<bits/stdc++.h>
using namespace std;
int n = 1;

void fun() {
    cout << n << ' ';
    n++;
    if (n <= 10)
        fun();
}

int main() {
    fun();
    return 0;
}
