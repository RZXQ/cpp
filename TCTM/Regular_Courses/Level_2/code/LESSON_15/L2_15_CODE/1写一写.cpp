#include<bits/stdc++.h>
using namespace std;

void fun() {
    cout << "进入下一层" << endl;
    fun();
}

int main() {
    fun();
    return 0;
}
