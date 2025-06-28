#include<iostream>
using namespace std;

struct stu {
    int id;
    string name;
    double score;
} b = {1, "yaya", 98};

int main() {
    stu a = {1, "yaya", 98};
    cout << a.id << endl;
    cout << a.name << endl;
    cout << a.score << endl;
    a.score = 95;
    cout << a.score << endl;
    return 0;
}
