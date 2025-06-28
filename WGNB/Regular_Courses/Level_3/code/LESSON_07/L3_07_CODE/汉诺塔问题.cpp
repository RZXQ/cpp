#include<bits/stdc++.h>
using namespace std;
int ans;

void hanoi(char a, char b, char c, int n) {
    if (n == 1) {
        cout << a << '-' << c << endl;
        return; //递归出口
    }
    hanoi(a, c, b, n - 1); //n-1个盘子从a移动到b
    cout << a << '-' << c << endl;
    hanoi(b, a, c, n - 1);
}

int main() {
    int n;
    cin >> n;
    hanoi('A', 'B', 'C', n); //起始柱  过度柱  目标柱 n个盘子
    return 0;
}
