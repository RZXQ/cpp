#include<bits/stdc++.h>
using namespace std;

struct stu {
    int id;
    string name;
    double score;
};

int main() {
    stu a = {1, "yaya", 98.5};
    stu *p = &a;
    //指针名->成员变量名
    cout << p->id << endl;
    cout << p->name << endl;
    cout << p->score << endl;
    //变量名.成员变量名
    cout << a.id << endl;
    cout << a.name << endl;
    cout << a.score << endl;
    //通过指针修改分数
    p->score = 100;
    //通过指针输出修改后的分数
    cout << p->score << endl;
    return 0;
}
