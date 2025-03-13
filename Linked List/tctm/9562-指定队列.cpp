/*
9562 指定队列

学校老师要将班上 N 名同学排成一列，同学们被编号为 1∼N，他采取如下的方法：
先将 1 号同学安排进队列，这时队列中只有他一人；
2∼N 号同学依次入列，编号为 i 的同学入列方式为：老师指定编号为 i 的同学站在编号为 1∼(i−1)中某位同学的左边或右边；
在所有同学按照上述方法排列完毕后，老师想知道从左到右所有同学的编号。

Input
第一行一个整数 N，表示有 N 名同学（1<n≤10000）。
第 2∼N 行，第 i 行包含两个整数 k，p，其中 k 为小于 i 的正整数，p 为 0 或者 1。若 p 为 0，则表示将 i 号同学插入到 k 号同学的左边，p 为 1 则表示插入到右边。

Output
一行，空格隔开的若干个整数，表示队伍从左到右所有同学的编号。

Sample Input 1
6
1 0
1 1
2 0
3 1
2 1

Sample Output 1
4 2 6 1 3 5
*/
#include <iostream>
using namespace std;

// Structure for a node in the doubly linked list representing a student
struct node {
    int data; // Student's number
    node *prev; // Pointer to the previous student
    node *next; // Pointer to the next student
};

int main() {
    // --- Initialize the queue with student 1 ---
    node *head = new node(); // Create the head node
    head->data = 1; // Set student number to 1
    head->prev = head->next = NULL; // No previous or next students yet

    // --- Process input for remaining students ---
    int n; // Total number of students
    cin >> n; // Read the number of students
    for (int i = 2; i <= n; i++) {
        // Loop to add students 2 through n
        // Create a new node for the current student
        node *newNode = new node();
        newNode->data = i; // Set student number to i
        newNode->prev = newNode->next = NULL; // Initialize pointers to NULL

        int desPos, leftOrRight; // Target student number and insertion side
        cin >> desPos >> leftOrRight; // Read target number and left(0)/right(1)

        // --- Find the target position ---
        node *p = head; // Start searching from the head
        while (p != NULL) {
            // Traverse the list
            if (p->data == desPos) {
                // Found the target student
                if (leftOrRight == 0) {
                    // Insert to the left
                    // Case 1: Insert at the head
                    if (p->prev == NULL) {
                        head = newNode; // Update head to newNode
                        head->next = p; // Link newNode to old head
                        p->prev = head; // Link old head back to newNode
                    } else {
                        // Case 2: Insert in the middle
                        p->prev->next = newNode; // Link previous to newNode
                        newNode->prev = p->prev; // Link newNode back to previous
                        newNode->next = p; // Link newNode to target
                        p->prev = newNode; // Link target back to newNode
                    }
                } else {
                    // Insert to the right
                    // Case 1: Insert in the middle
                    if (p->prev != NULL && p->next != NULL) {
                        p->next->prev = newNode; // Link next student to newNode
                        newNode->next = p->next; // Link newNode to next student
                        newNode->prev = p; // Link newNode back to target
                        p->next = newNode; // Link target to newNode
                    } else {
                        // Case 2: Insert at the tail
                        p->next = newNode; // Link target to newNode
                        newNode->prev = p; // Link newNode back to target
                    }
                }
                break; // Exit loop after insertion
            }
            p = p->next; // Move to the next student
        }
    }

    // --- Print the final queue ---
    node *p = head; // Start traversal from the head
    while (p != NULL) {
        // Continue until the end of the list
        cout << p->data << " "; // Output student number with a space
        p = p->next; // Move to the next student
    }

    return 0; // End of program
}
