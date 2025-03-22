/*
8920 满二叉树

Description
满二叉树：一棵二叉树，如果每一层的节点数都达到最大值，则这个二叉树就是满二叉树。即如果一棵二叉树的层数为K，且结点总数是（2^k）-1，那么它就是满二叉树。
完全二叉树：一棵深度为K的二叉树，除第K层外，其他各层（1至k-1层）的节点数都达到最大值，目第K层的所有节点都连续集中在左边，那么它就是完全二叉树。
节点：包含一个数据元素及若干指向子树分支的信息。
权值：对节点赋予的有意义的数量值。
深度：也被称为树的高度，树中所有节点的层次最大值称为树的深度，例如下图中的二叉树深度都为4。

编程实现：
给出一棵包含n个节点的完全二叉树，节点按照从上到下、从左到右的顺序依次排序，每个节点上都有一个权值，如下图现在需要将同一深度节点的权值加在一起，然后比较每个深度的权值之和，输出权值之和最大的深度值。如果有多个深度的权值之和相同，则输出其中最小的深度（如：深度2权值之和为5，深度3权值之和也为5，则输出2）。
注：根的深度为1。

第一行输入完全二叉树节点的总数量n（5<n<101），第二行输入n个正整数作为每个节点的权值。输出权值之和最大的深度值（如果有多个深度的权值之和相同则输出其中最小的深度值）。
例如：上图的二叉树，第一行输入为6，第二行输入为1 5 6 1 2 3。深度1的权值之和为1，深度2的权值之和为11，深度3的权值之和为6。其中深度2的权值之和最大，则输出2。

Input
第一行输入一个正整数n（5<n<101）作为节点的总数量。
第二行输入n个正整数，且n个正整数之间以一个空格隔开。

Output
输出权值之和最大的深度值。

Sample Input 1
6
1 5 6 1 2 3

Sample Output 1
2

Sample Input 2
8
1 5 6 1 2 3 4 100

Sample Output 2
4
*/

#include <iostream>
#include <cmath>
using namespace std;

int nodeWeights[105];

int main() {
    int nodeCount;
    cin >> nodeCount;

    int totalDepth = 0; // k -> 层数
    for (int i = 1; i <= 10; i++) {
        if (nodeCount <= (pow(2, i) - 1) && nodeCount >= (pow(2, i - 1))) {
            totalDepth = i;
            break;
        }
    }

    for (int i = 1; i <= nodeCount; i++) {
        cin >> nodeWeights[i];
    }

    int maxDepthWeightSum = INT_MIN;
    int currentDepth = 1;
    int maxWeightDepth = 1;

    while (currentDepth <= totalDepth) {
        int currentDepthWeightSum = 0;
        for (int i = pow(2, currentDepth - 1); i < (pow(2, currentDepth)); i++) {
            currentDepthWeightSum += nodeWeights[i];
        }

        if (currentDepthWeightSum > maxDepthWeightSum) {
            maxDepthWeightSum = currentDepthWeightSum;
            maxWeightDepth = currentDepth;
        }
        currentDepth++;
    }
    cout << maxWeightDepth;

    return 0;
}
