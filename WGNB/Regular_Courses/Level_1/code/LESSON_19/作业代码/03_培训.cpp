#include<bits/stdc++.h>
using namespace std;

struct stu {
    string name; //姓名
    int age; //年龄
    int score; //分数
} a[5001];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].age >> a[i].score;
        a[i].age++; //年龄增加1
        //计算经过培训后的分数
        int s = a[i].score + 100;
        if (s > 400) //分数不能超过总分400
            a[i].score = 400;
        else a[i].score = s;
    }
    //输出培训后每个学生的信息
    for (int i = 0; i < n; i++)
        cout << a[i].name << " " << a[i].age << " " << a[i].score << endl;
    return 0;
}
