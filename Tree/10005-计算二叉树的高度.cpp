/*
10005 计算二叉树的高度

Description
给出一个 n 个结点的二叉树，求这棵二叉树的高度。

Input
共n+1行，第一行有一个整数 n (0<n≤26)，表示二叉树有 n 个结点；
以下 n 行，每行第一个为一个大写字母表示结点的值，第 n+1 行的结点编号为n。
后面为两个整数，第一个表示该结点左孩子结点编号，第二个表示该结点右孩子结点编号，如果该编号为 0 0 表示没有。注意：编号为 1 的结点是树的根。

Output
输出这棵树的高度。

Sample Input 1
7
F 2 3
C 4 5
E 0 6
A 0 0
D 7 0
G 0 0
B 0 0

Sample Output 1
4
*/

#include <iostream>
using namespace std;

// Define the binary tree node structure
struct node {
    char data; // Node character value
    int left; // Index of left child node (0 means no child)
    int right; // Index of right child node (0 means no child)
} bTree[30]; // Binary tree represented as an array (indexed from 1)

// Recursive function to compute the height of the binary tree
int getDepth(int root) {
    if (root == 0) return 0; // Base case: empty subtree height is 0
    int l = getDepth(bTree[root].left); // Recursively compute left subtree height
    int r = getDepth(bTree[root].right); // Recursively compute right subtree height
    return max(l + 1, r + 1); // Tree height is max of left/right subtree height + 1 (for current node)
}

int main() {
    int n; // Number of nodes in the binary tree
    cin >> n; // Read the number of nodes

    // Input each node data and indices of left/right child nodes
    for (int i = 1; i <= n; i++) {
        cin >> bTree[i].data >> bTree[i].left >> bTree[i].right;
    }

    cout << getDepth(1) << endl; // Calculate and output the height starting from root node (index 1)
    return 0; // Program finished successfully
}
