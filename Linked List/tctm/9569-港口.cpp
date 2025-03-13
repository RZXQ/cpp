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

// Define the structure for a ship node in the doubly linked list
struct node {
    string name; // Ship's name
    int num; // Ship's unique number
    node *prev; // Pointer to the previous ship
    node *next; // Pointer to the next ship
};

int main() {
    // --- Initialize the list with the first ship ---
    // Create the head node for "tongchenghao" (initial ship)
    node *head = new node();
    head->name = "tongchenghao"; // Set name
    head->num = 1; // Set number
    head->next = head->prev = NULL; // No previous or next ships yet

    // --- Input processing for new ships ---
    int n; // Number of new ships to add
    cin >> n; // Read the number of new ships

    // Loop to add each new ship
    for (int i = 1; i <= n; i++) {
        // Create a new node for the incoming ship
        node *newNode = new node();
        cin >> newNode->name; // Read ship name
        cin >> newNode->num; // Read ship number
        newNode->next = newNode->prev = NULL; // Initialize pointers to NULL

        int desPos; // Position (ship number) to insert after
        cin >> desPos; // Read the insertion position

        // --- Find the insertion point ---
        node *p = head; // Start searching from the head
        while (p != NULL) {
            if (p->num == desPos) {
                // Found the ship with number desPos
                // --- Insert the new ship ---
                if (p->next == NULL) {
                    // Case 1: Insert at the end of the list
                    p->next = newNode; // Link new ship as next
                    newNode->prev = p; // Link back to previous ship
                } else {
                    // Case 2: Insert between two ships
                    p->next->prev = newNode; // Update next ship's prev pointer
                    newNode->next = p->next; // Link new ship to next ship
                    newNode->prev = p; // Link new ship back to current ship
                    p->next = newNode; // Link current ship to new ship
                }
                break; // Exit loop once inserted
            }
            p = p->next; // Move to the next ship in the list
        }
    }

    // --- Output the final list ---
    node *p = head; // Start traversal from the head
    while (p != NULL) {
        // Traverse until the end of the list
        cout << p->name << " " << p->num << endl; // Print ship name and number
        p = p->next; // Move to the next ship
    }

    // Note: Memory cleanup could be added here if required
    return 0; // Exit program
}
