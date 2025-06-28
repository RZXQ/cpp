#include <iostream>
using namespace std;

int main() {
    //判断平年与闰年
    int n;
    cin >> n;
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
