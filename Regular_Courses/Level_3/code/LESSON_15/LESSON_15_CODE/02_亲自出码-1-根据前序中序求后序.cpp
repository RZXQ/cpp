#include<bits/stdc++.h>
using namespace std;
string pre, mid;

struct node {
    char data;
    int left, right;
} BTree[30];

//根据先序+中序构造后序
int p = 0; //下一个可用的元素下标
int getTree(int pl, int pr, int ml, int mr) {
    /*
        pl-先序序列左边界
        pr-先序序列右边界
        ml-中序序列左边界
        mr-中序序列右边界
    */
    //空子树返回-1
    if (ml > mr) return -1;
    //非空子树的还原
    int bt = p++;
    BTree[bt].data = pre[pl]; //存储根结点
    //找出根结点在中序序列中的下标
    int i = ml;
    while (i <= mr && pre[pl] != mid[i]) i++;
    //左子树长度
    int len = i - ml;
    //还原左子树
    BTree[bt].left = getTree(pl + 1, pl + len, ml, i - 1);
    //还原右子树
    BTree[bt].right = getTree(pl + len + 1, pr, i + 1, mr);
    return bt;
}

//后序遍历
void postOrder(int root) {
    if (root > -1) {
        postOrder(BTree[root].left);
        postOrder(BTree[root].right);
        cout << BTree[root].data;
    }
}

int main() {
    cin >> pre >> mid;
    int n = pre.size();
    int root = getTree(0, n - 1, 0, n - 1);
    postOrder(root);
    cout << endl;


    return 0;
}
