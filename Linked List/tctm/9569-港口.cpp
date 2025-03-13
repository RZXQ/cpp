/*
9569 港口

Description
在一个历史悠久的航运公司中，他们使用了一种特殊设计的链表来管理停放的船只。每个链表结点代表了一艘船，包含了船只的名称、编号及指向下一艘船的指针。目前，港口内已经停放了一艘船，名称为 "tongchenghao"，编号为 1。
随着业务的不断发展，港口迎来了许多新的船只。这些船只需要按照系统给出的指示，精准地停放到链表中的指定位置。例如：提示"将珍珠号停放到童程号的右边"。
当所有船只都按照指示停放到位后，我们需要从童程号开始，依次向右遍历整个链表，并输出每艘船的名字及编号信息。这将帮助运营经理清晰地了解船只的停放情况。

Input
输入包含 n+1 行。
第一行：一个整数 n（1<n≤10000），表示新船只的数量。
接下来 n 行：每行包含三个数据，依次为船只名称（字符串）、船只编号（整数，不重复）和插入位置 k（整数），其中 k 表示新船只应插入到当前列表中编号为 k 的船只的右侧。

Output
输出共 n 行，每行输出两个数据，依次为船只名称和对应的船只编号，表示按照插入规则排列后的船只列表顺序。

Sample Input 1
3
zhenzhuhao 4 1
taitanhao 3 4
yangfanhao 5 1

Sample Output 1
tongchenghao 1
yangfanhao 5
zhenzhuhao 4
taitanhao 3
*/
#include <iostream>
#include <string>
using namespace std;

// Structure representing a ship in the doubly linked list
struct node {
    string name; // Name of the ship
    int num; // Unique number of the ship
    node *prev; // Pointer to the previous ship
    node *next; // Pointer to the next ship
};

int main() {
    // --- Initialize the starting ship ---
    // Create and set up the head node for the initial ship
    node *head = new node();
    head->name = "tongchenghao"; // Assign the initial ship's name
    head->num = 1; // Assign the initial ship's number
    head->next = head->prev = NULL; // Set pointers to NULL as it's the only ship

    // --- Process input for new ships ---
    int n; // Number of new ships to add
    cin >> n; // Read the count of new ships
    for (int i = 1; i <= n; i++) {
        // Loop through each new ship
        // Create a new node for the ship to be added
        node *newNode = new node();
        cin >> newNode->name; // Input the ship's name
        cin >> newNode->num; // Input the ship's number
        newNode->next = newNode->prev = NULL; // Initialize pointers to NULL

        int desPos; // Target ship number to insert after
        cin >> desPos; // Read the insertion position

        // --- Locate the insertion position ---
        node *p = head; // Start searching from the head of the list
        while (p != NULL) {
            // Traverse the list
            if (p->num == desPos) {
                // Found the ship with the target number
                // Insert the new ship to the right of p
                if (p->next == NULL) {
                    // If p is the last ship
                    p->next = newNode; // Link newNode as the next ship
                    newNode->prev = p; // Link back to p
                } else {
                    // If p is not the last ship
                    p->next->prev = newNode; // Update the next ship's prev pointer
                    newNode->next = p->next; // Link newNode to the next ship
                    newNode->prev = p; // Link newNode back to p
                    p->next = newNode; // Link p to newNode
                }
                break; // Stop searching once inserted
            }
            p = p->next; // Move to the next ship in the list
        }
    }

    // --- Print the final list ---
    node *p = head; // Begin traversal from the head
    while (p != NULL) {
        // Continue until the end of the list
        cout << p->name << " " << p->num << endl; // Output ship name and number
        p = p->next; // Advance to the next ship
    }

    return 0; // End of program
}
