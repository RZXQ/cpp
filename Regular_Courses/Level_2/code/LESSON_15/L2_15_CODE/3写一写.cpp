#include<bits/stdc++.h>
using namespace std;
int i = 0;

void fun() {
    cout << "进入下一层" << endl;
    i++;
    if (i < 5)
        fun();
    cout << "回归上一层" << endl;
}

int main() {
    fun();
    return 0;
}
