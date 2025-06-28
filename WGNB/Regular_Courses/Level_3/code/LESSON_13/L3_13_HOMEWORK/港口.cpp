#include<bits/stdc++.h>
using namespace std;

struct node {
    string name; //船的名称
    int num; //编号
    node *next; //后继指针
} *head, *p;

int main() {
    int n;
    cin >> n;
    head = new node;
    head->name = "tongchenghao";
    head->num = 1;
    head->next = NULL;
    for (int i = 1; i <= n; i++) {
        node *s = new node;
        int k; //k号的右边
        cin >> s->name >> s->num >> k;
        s->next = NULL;
        p = head;
        while (p != NULL) {
            if (p->num == k) {
                s->next = p->next;
                p->next = s;
                break;
            }
            p = p->next; //指向下一个结点
        }
    }
    p = head;
    while (p != NULL) {
        cout << p->name << ' ' << p->num << endl;
        p = p->next;
    }
    return 0;
}
