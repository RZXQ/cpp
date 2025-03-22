/*
8079 找树根和孩子

Description
给定一棵树，输出树的根 root，孩子最多的结点 max 以及他的孩子。

Input
第一行：n（结点个数≤100），m（边数≤200）。
以下 m 行：每行两个结点 x 和 y，表示 y 是 x 的孩子(x,y≤1000)。

Output
第一行：树根：root；
第二行：孩子最多的结点 max；
第三行：max 的孩子（按编号由小到输出）。

Sample Input 1
8 7
4 1
4 2
1 3
1 5
2 6
2 7
2 8

Sample Output 1
4
2
6 7 8
*/

#include <iostream>
using namespace std;

// Array to store the parent of each node.
// Example: if par[child] = parent, it means "parent" is the parent of "child".
int par[205];

// Array to store the number of children (degree) each node has.
int deg[105];

int main() {
    int n, m; // n: number of nodes, m: number of edges
    cin >> n >> m;

    // Reading node relationships (parent-child pairs)
    for (int i = 1; i <= m; i++) {
        int parent, child;
        cin >> parent >> child;
        par[child] = parent; // Record parent of each node
    }

    int root; // To store the root node of the tree
    // Identify root and calculate degree (number of children) of each node
    for (int i = 1; i <= n; i++) {
        if (par[i] == 0) {
            root = i; // Node without a parent is the root
        }
        deg[par[i]]++; // Increment child count for the parent node
    }

    cout << root << endl; // Output the root node number

    int maxDeg = 0; // Maximum number of children achieved by any node
    int maxNode = 0; // Node having the maximum number of children

    // Find the node with the maximum number of children
    for (int i = 1; i <= n; i++) {
        if (deg[i] > maxDeg) {
            maxDeg = deg[i];
            maxNode = i;
        }
    }

    cout << maxNode << endl; // Output the node number having the maximum children

    // Output all children of the "maxNode".
    // Automatically printed in ascending order because traversal goes from 1 to n.
    for (int i = 1; i <= n; i++) {
        if (par[i] == maxNode) {
            // If the node's parent is "maxNode"
            cout << i << " "; // Print the child node number
        }
    }

    return 0;
}
