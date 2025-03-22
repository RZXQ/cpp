/*
2172 树的高度

Description
一棵树有 n 个结点，结点编号为 1~n，其中 1 号结点为根结点，根结点的深度为 1 ，请问树的高度是多少。

Input
第一行是整数 n，表示结点数。（1≤n≤100）
后面若干行，每行两个整数a b，表示 b 是 a 的子结点。
本题测试数据保证所有结点能构建为一棵树。

Output
求这棵树的高度。

Sample Input 1
5
1 2
1 3
3 4
3 5

Sample Output 1
3
*/

#include <iostream>
using namespace std;

// Structure representing a node within the binary tree
struct node {
    int data; // Node identifier (data field; not essential given the current context)
    int left; // Index of the left child node (0 if no left child)
    int right; // Index of the right child node (0 if no right child)
} bTree[105]; // Array representing the binary tree (indexed by node number from 1 to 100)

// Recursive function to determine the height of the tree starting from a given root node
int getHeight(int root) {
    if (root == 0) {
        return 0; // Base case: A null child node has height of 0
    }

    int l = getHeight(bTree[root].left); // Calculate height of left subtree
    int r = getHeight(bTree[root].right); // Calculate height of right subtree

    return max(l + 1, r + 1); // Height = larger height of subtrees + current level (1)
}

int main() {
    int n; // Number of nodes in the tree
    cin >> n;

    // Read (n-1) parent-child relationships and populate the tree structure
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;

        bTree[a].data = a; // Assign data value (node number)

        // Insert 'b' as a child of 'a' (left prioritized, else right)
        if (bTree[a].left == 0) {
            bTree[a].left = b;
        } else {
            bTree[a].right = b;
        }
    }

    // Calculate and print the tree's height (starting from root node 1)
    cout << getHeight(1);

    return 0; // Indicate successful program termination
}
