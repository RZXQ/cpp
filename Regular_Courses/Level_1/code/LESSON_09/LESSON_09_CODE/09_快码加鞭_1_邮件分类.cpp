#include <iostream>
using namespace std;

int main() {
    // 创建三个数组用于存储北京，上海，天津的邮件
    const int N = 10000;
    int a[N] = {};
    int b[N] = {};
    int c[N] = {};
    int n;
    cin >> n;
    // 邮政编码，六位数
    int x;
    int a_cnt = 0, b_cnt = 0, c_cnt = 0;
    //循环接收，并判断是哪个城市的邮件
    for (int i = 0; i < n; i++) {
        cin >> x;
        switch (x / 10000) {
            case 10:
                a[a_cnt] = x;
                a_cnt++;
                break;
            case 20:
                b[b_cnt] = x;
                b_cnt++;
                break;
            case 30:
                c[c_cnt] = x;
                c_cnt++;
                break;
        }
    }
    //输出
    cout << "Beijing" << endl;
    for (int i = 0; i < a_cnt; i++) {
        cout << a[i] << " ";
    }
    cout << endl << "Shanghai" << endl;
    for (int i = 0; i < b_cnt; i++) {
        cout << b[i] << " ";
    }
    cout << endl << "Tianjin" << endl;
    for (int i = 0; i < c_cnt; i++) {
        cout << c[i] << " ";
    }
    return 0;
}
