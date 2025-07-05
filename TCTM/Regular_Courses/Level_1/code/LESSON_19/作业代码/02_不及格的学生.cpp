#include<bits/stdc++.h>
using namespace std;

struct stu {
    int num; //学号
    int c, m, e; //语数英成绩
    double avg; //平均分
} a[101];

bool cmp(stu x, stu y) {
    return x.avg < y.avg;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].num >> a[i].c >> a[i].m >> a[i].e;
        double t = a[i].c + a[i].m + a[i].e;
        a[i].avg = t / 3;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        if (a[i].avg < 60) cout << a[i].num << endl;
        else break;
    }
    return 0;
}
