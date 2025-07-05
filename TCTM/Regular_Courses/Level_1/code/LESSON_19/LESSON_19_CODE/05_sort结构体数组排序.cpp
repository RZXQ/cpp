#include<bits/stdc++.h>
using namespace std;

struct stu {
    int id; //学号
    string name; //姓名
    double score; //成绩
};

stu a[3]; //存储学生信息
bool cmp(stu x, stu y) {
    return x.score < y.score;
}

bool cmp1(stu x, stu y) {
    return x.score > y.score;
}

bool cmp2(stu x, stu y) {
    return x.name < y.name;
}

int main() {
    for (int i = 0; i < 3; i++)
        cin >> a[i].id >> a[i].name >> a[i].score;
    //升序排序
    sort(a, a + 3, cmp2);
    //输出排序结果
    for (int i = 0; i < 3; i++)
        cout << a[i].id << " " << a[i].name << " " << a[i].score << endl;
    return 0;
}
