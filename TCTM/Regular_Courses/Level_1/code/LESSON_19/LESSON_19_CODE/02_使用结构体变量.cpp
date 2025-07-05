#include<iostream>
using namespace std;

struct stu {
    int id;
    string name;
    double score;
} b = {1, "yaya", 98};

int main() {
    stu a;
    cin >> a.id >> a.name >> a.score;
    cout << a.id << endl;
    cout << a.name << endl;
    cout << a.score << endl;
    return 0;
}
