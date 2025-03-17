#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    int left, right;
} BTree[130];

//求树的深度
int getDepth(int root) {
    if (root == -1) return 0;
    int l = getDepth(BTree[root].left);
    int left = l + 1;
    int r = getDepth(BTree[root].right);
    int right = r + 1;
    return max(left, right);
}

//扩展二叉树的后序遍历构建二叉树
string s;
int i;
int p = 0;

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

int main() {
    cin >> s;
    i = s.length() - 1;
    int root = createTree();
    cout << getDepth(root);

    return 0;
}
