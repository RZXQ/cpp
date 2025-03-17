#include<bits/stdc++.h>
using namespace std;

struct person {
    string name;
    int vote;
};

person a[3] = {{"li", 0}, {"zhang", 0}, {"sun", 0}};

int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        //统计票数
        if (a[0].name == s) a[0].vote++;
        else if (a[1].name == s) a[1].vote++;
        else a[2].vote++;
    }
    //每名候选人和他的得票数
    for (int i = 0; i < 3; i++) {
        cout << a[i].name << " " << a[i].vote << endl;
    }
    return 0;
}
