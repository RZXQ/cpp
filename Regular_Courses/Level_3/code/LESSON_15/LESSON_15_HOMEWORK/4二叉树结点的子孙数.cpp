#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    int left, right;
} BTree[130];

string s;
int p = 0, i;

int createTree() {
    char c = s[i];
    i--;
    if (c == '.') return -1;
    int t = p++;
    BTree[t].data = c;
    BTree[t].right = createTree();
    BTree[t].left = createTree();
    return t;
}

int sum = 0;

int getDepth(int root) {
    if (root == -1) return 0;
    sum += 1;
    getDepth(BTree[root].left);
    getDepth(BTree[root].right);
    return sum;
}

int main() {
    cin >> s;
    i = s.size() - 1;
    createTree();
    char s1;
    cin >> s1;
    int new_root = 0;
    for (int i = 0; i < p; i++) {
        if (BTree[i].data == s1) {
            new_root = i;
        }
    }
    cout << getDepth(new_root) - 1 << endl;
    return 0;
}
