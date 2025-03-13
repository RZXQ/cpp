#include <iostream>
using namespace std;

int main() {
    //考试分数统计
    int n;
    cin >> n;
    int p, q;
    cin >> p >> q;
    int s;
    int a = 0, b = 0;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        // 统计低于p的人数
        if (s < p)a++;
        // 统计高于q的人数
        if (s > q)b++;
    }
    cout << a << " " << b << endl;
    return 0;
}
