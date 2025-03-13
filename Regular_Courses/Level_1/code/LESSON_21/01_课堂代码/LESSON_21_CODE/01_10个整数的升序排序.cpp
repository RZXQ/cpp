#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[9] = {0}, x;
    //读入数据，并累计数据的个数到数组a中
    for (int i = 0; i < 10; i++) {
        cin >> x;
        a[x]++;
    }
    //从左到右依次遍历每个数组元素，根据数组元素中累计的数字数量，输出对应个数的下标。
    for (int i = 0; i <= 8; i++) {
        for (int j = 1; j <= a[i]; j++) {
            //根据数组元素中累计的数字数量，输出对应个数的下标。
            cout << i << " ";
        }
    }
    return 0;
}
