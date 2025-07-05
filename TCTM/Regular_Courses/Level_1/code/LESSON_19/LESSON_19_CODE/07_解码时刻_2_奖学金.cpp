#include<bits/stdc++.h>
using namespace std;

//学生结构体
struct stu {
    int num; //学号
    int c; //语文成绩
    int s; //总分
} a[305];

//自定义排序规则
bool cmp(stu x, stu y) {
    if (x.s != y.s) //总分不相等
        return x.s > y.s;
    else if (x.c != y.c) //语文成绩不相等
        return x.c > y.c;
    else return x.num < y.num; //学号小的排在前面
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int c, m, e;
        cin >> c >> m >> e;
        a[i].c = c; //存储语文成绩
        a[i].s = c + m + e; //存储总分
        a[i].num = i; //存储学号
    }
    //对结构体数组进行排序
    sort(a + 1, a + n + 1, cmp);
    //输出前5个学生的学号和总分
    for (int i = 1; i <= 5; i++)
        cout << a[i].num << " " << a[i].s << endl;
    return 0;
}
