#include<bits/stdc++.h>
using namespace std;

struct stu {
    int id;
    string name;
    double score;
} a[3];

//stu a[2]={{1,"yaya",98},{2,"qiqi",82.5}};
bool cmp(stu x, stu y) {
    return x.score < y.score;
}

int main() {
    for (int i = 0; i < 3; i++)
        cin >> a[i].id >> a[i].name >> a[i].score;
    sort(a, a + 3, cmp);
    for (int i = 0; i < 3; i++)
        cout << a[i].id << " " << a[i].name << " " << a[i].score << endl;
    return 0;
}
