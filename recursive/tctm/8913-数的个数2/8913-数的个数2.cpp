/*
Description
我们要求找出具有下列性质数的个数 (包括输入的正整数 n )。先输入一个数 n，然后对此正整数按照如下方法进行处理：
1.不作任何处理;
2.在它的左边加上一个正整数且为奇数，但该正整数不能超过原数的一半。
3.加上数后，继续按此规则进行处理，直到不能再加正整数为止。

Input
正整数 n(0<n<100），且 n 为奇数。

Output
满足条件数的个数。

Sample Input 1
11

Sample Output 1
6

Hint
满足条件的数为:11、1 11、3 11、5 11、1 3 11、1 5 11。
*/
#include <iostream>
using namespace std;

int cnt = 1;

int fn(int n) {
    for (int i = 1; i <= n / 2; i += 2) {
        cnt++;
        fn(i);
    }
}

int main() {
    int n;
    cin >> n;
    fn(n);
    cout << cnt << endl;
}
