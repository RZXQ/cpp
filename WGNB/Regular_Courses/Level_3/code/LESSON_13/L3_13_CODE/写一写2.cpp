#include<bits/stdc++.h>
using namespace std;

struct node {
    int data; //数据
    node *next; //指向后继结点
};

int main() {
    int n;
    cin >> n;
    node *head = new node;
    head->data = 1;
    head->next = NULL;
    node *p = head; //遍历指针p
    for (int i = 2; i <= n; i++) {
        node *s = new node;
        s->data = i;
        s->next = NULL;
        p->next = s; //链接到链表尾部
        p = p->next; //指向链表尾部
    }
    p = head; //指向第一个结点
    while (p != NULL) {
        cout << p->data << ' ';
        p = p->next;
    }
    return 0;
}
