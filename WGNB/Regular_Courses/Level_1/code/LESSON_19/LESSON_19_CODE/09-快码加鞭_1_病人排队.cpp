#include<bits/stdc++.h>
using namespace std;

struct sick {
    string ID;
    int age; //年龄
    int num; //登记序号
} a[101], b[101]; //a存储老年人，b存储非老年人
bool cmp(sick x, sick y) {
    if (x.age != y.age)
        return x.age > y.age;
    else
        return x.num < y.num;
}

int main() {
    int n; //病人数量
    cin >> n;
    //old：统计老年人数量，young：统计非老年人数量
    string ID; //用于读入病人ID
    int age; //用于读入病人的年龄
    int ai = 0, bi = 0;
    for (int i = 1; i <= n; i++) {
        cin >> ID >> age;
        if (age >= 60) {
            //如果是老年人，存到a数组
            a[ai].num = i;
            a[ai].ID = ID;
            a[ai].age = age;
            ai++;
        } else {
            //非老年人，存到b数组
            b[bi].num = i;
            b[bi].ID = ID;
            b[bi].age = age;
            bi++;
        }
    }
    //对老年人组进行排序
    sort(a, a + ai, cmp);
    //输出排序后结果
    for (int i = 0; i < ai; i++)
        cout << a[i].ID << endl;
    for (int i = 0; i < bi; i++)
        cout << b[i].ID << endl;
    return 0;
}
