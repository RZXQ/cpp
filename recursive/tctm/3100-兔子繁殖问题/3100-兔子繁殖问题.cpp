/*
Description
假定小兔子一个月就可以长成大兔子，而大兔子每个月就会生出一对小兔子。如果年初养了一对小兔子，问：到年底时将有多少对兔子？（假设兔子没有死亡而且严格按照上述规律长大与繁殖）此问题用递归处理。

Input
无

Output
到年底时将有多少对兔子？

Sample Input 1
无

Sample Output 1
不提示
*/
#include <iostream>
using namespace std;

int f(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return f(n - 1) + f(n - 2);
}

int main() {
    cout << f(12) << endl;
}

/*
标准答案:
#include<bits/stdc++.h>
using namespace std;
//递归兔子繁殖问题
int f(int n) {
    //递归出口
    if (n == 1 || n == 2)
        return 1;
    //问题转换公式
    return f(n - 1) + f(n - 2);
}

int main() {
    //求12月兔子数量
    cout << f(12);
    return 0;
}
*/
