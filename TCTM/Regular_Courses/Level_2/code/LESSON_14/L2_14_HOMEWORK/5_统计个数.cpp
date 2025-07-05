#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
} *head, *tail, *p;

int main() {
    int n;
    tail = head = new node;
    while (true) {
        cin >> n;
        if (n == -1) break;
        p = new node;
        p->data = n;
        tail->next = p;
        p->next = NULL;
        tail = p;
    }
    int m, ans = 0;
    cin >> m;
    p = head;
    while (p->next != NULL) {
        p = p->next;
        if (m == p->data) ans++;
    }
    cout << ans;
    return 0;
}
