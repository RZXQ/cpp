#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    int left, right;
} BTree[51];

string pre, mid;
int p = 0;

int getTree(int pl, int pr, int ml, int mr) {
    if (ml > mr) return -1;
    int t = p++;
    BTree[t].data = pre[pl];
    int i = ml;
    while (i <= mr && mid[i] != pre[pl])i++;
    int len = i - ml;
    BTree[t].left = getTree(pl + 1, pl + len, ml, i - 1);
    BTree[t].right = getTree(pl + len + 1, pr, i + 1, mr);
    return t;
}

int getDepth(int root) {
    if (root == -1) return 0;
    int l = getDepth(BTree[root].left);
    int r = getDepth(BTree[root].right);
    int left = l + 1;
    int right = r + 1;
    return max(left, right);
}

int main() {
    int sum;
    while (cin >> sum >> pre >> mid) {
        p = 0;
        int root = getTree(0, sum - 1, 0, sum - 1);
        cout << getDepth(root) << endl;
    }
    return 0;
}
