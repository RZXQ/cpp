#include<bits/stdc++.h>
using namespace std;

struct stu {
    int num; //学号
    double s; //成绩
};

stu a[101];
int n, k; //学生人数和第k名
bool cmp(stu x, stu y) {
    return x.s > y.s;
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].num >> a[i].s;
    }
    sort(a + 1, a + n + 1, cmp);
    //输出第k名的学号和分数
    cout << a[k].num << " " << a[k].s;
    return 0;
}
