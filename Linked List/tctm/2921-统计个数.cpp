/*
2921 统计个数

Description
小鹿想输入一些整数数字，输入-1停止输入。在输入一个数字n，统计在这些数字中，n出现了多少次。请你编写代码帮助小鹿实现吧。

Input
共2行，第一行，一些整数数字，最后一个数字为-1。第二行，一个整数n，表示要查找的数字。

Output
一个整数，表示n出现的次数。

Sample Input 1
6 1 2 3 4 6 5 3 3 2 1 3 -1
3

Sample Output 1
4
*/

#include <iostream>
using namespace std;

// Define a singly linked list node structure
struct node {
    int data; // Integer value stored in the node
    node *next; // Pointer to the next node in the list
};

int main() {
    // Create the head node of the linked list
    node *head = new node();

    int n; // Variable used for reading input integers
    cin >> n; // Input the first integer
    head->data = n; // Assign the input integer to head node's data
    head->next = NULL; // Initialize head node next pointer to NULL

    node *p = head; // Pointer 'p' for iterating or creating other nodes

    // Special case: handle when the first integer input is -1 (empty list)
    if (head->data == -1) {
        cout << 0; // No numbers entered before -1; output 0 occurrences
        return 0; // Exit program immediately
    }

    // Loop to continue reading integers and adding to the linked list until -1 is input
    while (cin >> n && n != -1) {
        node *newNode = new node(); // Create a new node dynamically

        newNode->data = n; // Assign input integer as node's data
        newNode->next = NULL; // New node will be the tail (next=NULL)
        p->next = newNode; // Link the new node onto the existing list

        p = p->next; // Move pointer p to this new node
    }

    p = head; // Reset pointer p back to the head of the list

    int m; // Integer to search for in the linked list
    cin >> m; // Read in integer to count occurrences

    int count = 0; // Initialize counter to zero

    // Traverse the list from head, counting occurrences of integer 'm'
    while (p != NULL) {
        if ((p->data) == m) count++; // Increment count if current node matches integer 'm'
        p = p->next; // Move pointer to next node in list
    }

    cout << count; // Output total count of occurrences

    return 0;
}
