#include <bits/stdc++.h>
using namespace std;
priority_queue<long long, vector<long long>, greater<long long> > pq1;
priority_queue<long long> pq2;

int main() {
    long long n, q;
    cin >> n >> q;
    char c;
    long long w;
    for (long long i = 1; i <= n; i++) {
        cin >> c;
        if (c == 'I') {
            cin >> w;
            if (pq1.size() < q) {
                pq1.push(w);
            } else if (pq1.top() < w) {
                pq2.push(pq1.top());
                pq1.pop();
                pq1.push(w);
            } else {
                pq2.push(w);
            }
        } else {
            cout << pq1.top() << endl;
            pq1.pop();
            if (pq2.size() > 0) {
                pq1.push(pq2.top());
                pq2.pop();
            }
        }
    }
    return 0;
}
