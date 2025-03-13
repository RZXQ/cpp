#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    int left, right;
} BTree[53];

void inOrder(int root) {
    if (root >= 0) {
        inOrder(BTree[root].left);
        cout << BTree[root].data;
        inOrder(BTree[root].right);
    }
}

void postOrder(int root) {
    if (root >= 0) {
        postOrder(BTree[root].left);
        postOrder(BTree[root].right);
        cout << BTree[root].data;
    }
}

char s[53];
int i = 0;
int p = 0;

int createTree() {
    char c = s[i];
    i++;
    if (c == '.') return -1;
    int t = p++;
    BTree[t].data = c;
    BTree[t].left = createTree();
    BTree[t].right = createTree();
    return t;
}

int main() {
    cin >> s;
    int root = createTree();
    inOrder(root);
    cout << endl;
    postOrder(root);
    return 0;
}
