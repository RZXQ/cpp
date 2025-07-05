#include<bits/stdc++.h>
using namespace std;

union stu {
    char grade;
    int score;
};

int main() {
    stu s = {'A'};
    cout << s.grade << endl;
    cout << s.score << endl;
    s.score = 100;
    cout << s.score << endl;
    cout << s.grade << endl;
    cout << sizeof(s.grade) << endl;
    cout << sizeof(s.score) << endl;
    cout << sizeof(s) << endl;
    return 0;
}
