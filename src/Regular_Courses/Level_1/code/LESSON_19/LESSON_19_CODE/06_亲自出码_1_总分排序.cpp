#include<bits/stdc++.h>
using namespace std;

//学生结构体
struct stu {
    int num; //学号
    int c; //语文成绩
    int m; //数学成绩
    int s; //总分
};

stu a[101];
//自定义排序规则
bool cmp(stu x, stu y) {
    return x.s > y.s;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        //读入学号、语文和数学成绩
        cin >> a[i].num >> a[i].c >> a[i].m;
        a[i].s = a[i].c + a[i].m; //存储总分
    }
    //对结构体数组进行排序
    sort(a, a + n, cmp);
    //输出学生的学号和总分
    for (int i = 0; i < n; i++)
        cout << a[i].num << " " << a[i].s << endl;
    return 0;
}
