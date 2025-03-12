#include <iostream>
using namespace std;

// Define a singly linked list node structure
struct node {
    int data; // Integer value stored in the node
    node *next; // Pointer to the next node in the list
};

int main() {
    // Create and initialize the head node of the linked list
    node *head = new node();
    node *p = head; // Pointer 'p' to keep track of the current node
    head->next = NULL; // Initially, list contains only one node, so next is NULL

    int n; // Variable to store input integers
    cin >> n; // Read the first integer from input
    head->data = n; // Assign the first integer to the head node's data

    // Check if the first number is -1 indicating an empty input scenario
    if (head->data == -1) {
        cout << -1; // Output -1 since there are no numbers to check
        return 0; // Exit the program since no further input is necessary
    }

    // Continue taking integer input until -1 is encountered
    while (cin >> n && n != -1) {
        node *newNode = new node(); // Create a new node dynamically
        newNode->data = n; // Assign current input integer to the new node's data
        newNode->next = NULL; // Set the next pointer of the new node to NULL

        p->next = newNode; // Attach the newly created node to end of list
        p = p->next; // Move the pointer 'p' to the new node (current tail)
    }

    p = head; // Reset pointer 'p' to the start (head) of the linked list

    // Iterate through the list, finding and displaying numbers that are multiples of 3
    while (p != NULL) {
        if (p->data % 3 == 0) {
            // Check if current node's data is divisible evenly by 3
            cout << p->data << " "; // Output the data if condition is true
        }
        p = p->next; // Move pointer to the next node in list
    }

    return 0; // End of program
}
