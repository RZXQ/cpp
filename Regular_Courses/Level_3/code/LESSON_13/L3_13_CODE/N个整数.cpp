#include<bits/stdc++.h>
using namespace std;

struct node {
    int data; //数据
    node *next; //后继指针
    node *prev; //前驱指针
};

int main() {
    int n;
    cin >> n;
    node *head = new node;
    head->data = n;
    head->prev = NULL;
    head->next = NULL;
    node *p = head;
    while (1) {
        cin >> n;
        if (n == 0) break;
        node *s = new node;
        s->data = n;
        s->next = NULL;
        s->prev = p; //链接到双向链表中
        p->next = s; //链接到双向链表中
        p = p->next;
    }
    node *tail = p; //尾指针
    p = head; //指向第一个结点
    while (p != NULL) {
        cout << p->data << ' ';
        p = p->next;
    }
    cout << endl;
    p = tail; //指向最后一个结点
    while (p != NULL) {
        cout << p->data << ' ';
        p = p->prev;
    }
    return 0;
}
