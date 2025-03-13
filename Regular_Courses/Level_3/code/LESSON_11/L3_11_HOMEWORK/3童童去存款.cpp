#include<bits/stdc++.h>
using namespace std;
queue<int> qa;
queue<int> qb;

int main() {
    int n;
    cin >> n;
    int id;
    for (int i = 1; i <= n; i++) {
        cin >> id;
        if (id % 2 != 0)
            qa.push(id);
        else
            qb.push(id);
    }
    while (qa.empty() != 1 || qb.empty() != 1) {
        if (qa.size() > 0) {
            //判断元素个数非0
            cout << qa.front() << " ";
            qa.pop();
        }
        if (qa.size() > 0) {
            cout << qa.front() << " ";
            qa.pop();
        }
        if (qb.size() > 0) {
            cout << qb.front() << " ";
            qb.pop();
        }
    }
    return 0;
}
