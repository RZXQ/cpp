#include <iostream>
using namespace std;

int main() {
    int a[20005] = {0};
    int b, n;
    cin >> n >> b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int j;
        int x = a[i]; //临时记录需要插入的数字
        for (j = i - 1; j >= 0; j--) {
            if (x > a[j])
                a[j + 1] = a[j];
            else break;
        }
        a[j + 1] = x; //插入数字
    }
    int h = 0, num = 0; //h:奶牛叠加高度；num：使用的奶牛数量
    while (h < b) {
        //当奶牛高度达到书架高度时停止
        h += a[num]; //增加奶牛的高度
        num++; //增加使用奶牛数
    }
    cout << num;


    return 0;
}
