#include<bits/stdc++.h>
using namespace std;

struct node {
    int id;
    string name;
};

queue<node> q;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string name;
        cin >> name;
        q.push({i, name});
    }

    int k = 1;
    while (q.empty() != 1) {
        if (k % m != 0) {
            q.push(q.front());
            q.pop();
        } else {
            cout << q.front().id << ' ' << q.front().name << endl;
            q.pop();
        }
        k++;
    }


    return 0;
}
