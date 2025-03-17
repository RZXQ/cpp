/*
9381 排队安排

Description
学校老师要将班上 N 个同学排成一队，同学被编号为 1∼N，老师采取如下方法：
1. 先将 1 号同学安排进队伍，这时队伍只有他一个人；
2. 2∼N 号同学依次入队，编号为i的同学入队方式为：老师指定编号为i的同学站在编号为 1∼(i−1)中某位同学的右边；
3. 从队伍中去掉 m 个同学，其他同学位置顺序不变。

Input
第 1 行一个整数 N，表示有 N 个同学。
第 2∼N 行，第 i 行包含一个整数 k，表示将 i 号同学插入到 k 号同学右边。
第 N+1 行，一个整数 M，表示去掉的同学数目。
接下来 M 行，每行一个整数 x，表示将 x 号学生从队伍中移去，如果 x 号同学已经不在队列中，则忽略这一条指令。

Output
一行，空格隔开的若干个整数，表示队伍从左到右所有同学的编号。

Sample Input 1
4
1
2
1
2
3
3

Sample Output 1
1 4 2

Hint
数据范围与提示
1<m≤n≤1000
*/

#include <iostream>
using namespace std;

// Define structure for a doubly linked-list node
struct node {
    int data; // Student ID
    node *prev; // Pointer to the previous node
    node *next; // Pointer to the next node
};

int main() {
    int n; // Total number of students
    cin >> n;

    // Initialize head node representing the first student in the queue
    node *head = new node();
    head->data = 1; // Assign student number 1 to head
    head->prev = head->next = NULL; // Initially, head is the only node

    // Insert remaining students into the queue
    node *newNode; // Pointer to represent newly created node
    for (int i = 2; i <= n; i++) {
        // Create a new node for the current student
        newNode = new node();
        newNode->data = i; // Assign current student number
        newNode->prev = newNode->next = NULL;

        int destData; // Student number after which the new student should stand
        cin >> destData;

        // Search the queue to find the target student (destData)
        node *p = head;
        while (p != NULL) {
            if (p->data == destData) {
                // Insert at end of queue if target student is currently at the last position
                if (p->next == NULL) {
                    p->next = newNode;
                    newNode->prev = p;
                } else {
                    // Otherwise, insert in the middle
                    p->next->prev = newNode;
                    newNode->next = p->next;

                    newNode->prev = p;
                    p->next = newNode;
                }
                break; // Node successfully inserted
            }
            p = p->next; // Continue traversal
        }
    }

    int m; // Number of students to be removed
    cin >> m;

    // Remove specified students from the queue
    for (int i = 1; i <= m; i++) {
        int x; // Student number to remove
        cin >> x;

        // Search queue for node to remove
        node *p = head;
        while (p != NULL) {
            if (p->data == x) {
                // If removing head node (first student of queue)
                if (p->prev == NULL) {
                    head = p->next; // Move head pointer to next node
                    head->prev = NULL; // Detach current head node from queue
                    p->next = NULL; // Detach current node (p) from queue
                }
                // If removing tail node (the last student in the queue)
                else if (p->next == NULL) {
                    p->prev->next = NULL;
                    // If removing a middle node with previous and next nodes present
                } else {
                    p->prev->next = p->next;
                    p->next->prev = p->prev;
                }
                break; // Node found and removed
            }
            p = p->next; // Continue traversal
        }
    }

    // Traverse linked-list and print the queue from left to right
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " "; // Output student number
        temp = temp->next; // Move to the next student
    }

    return 0; // Program executed successfully
}
