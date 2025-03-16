#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
    node *prev;
};

int main() {
    int n, k; //n名同学
    cin >> n;
    node *head = new node; //头指针指向首结点
    head->data = 1; //1号同学
    head->next = NULL; //指针初始化
    head->prev = NULL; //指针初始化
    node *p; //遍历链表指针
    for (int i = 2; i <= n; i++) {
        //2~n号同学依次入队
        node *s = new node;
        s->data = i; //i号同学
        s->next = NULL; //初始化
        s->prev = NULL;
        cin >> k; //i号同学插入到k号同学右边
        p = head; //指向首结点
        while (p != NULL) {
            if (p->data == k && p->next == NULL) {
                //尾部插入
                s->prev = p;
                p->next = s;
                break;
            }
            if (p->data == k) {
                //中间插入
                s->next = p->next;
                s->prev = p;
                p->next->prev = s;
                p->next = s;
                break;
            }
            p = p->next;
        }
    }
    int m, x; //m:删除学生人数 x:具体删除学生的编号
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> x;
        p = head; //指向首结点
        while (p != NULL) {
            if (head->data == x) {
                //删除头部
                head = p->next;
                head->prev = NULL;
                p->next = NULL;
                break;
            }
            if (p->data == x && p->next == NULL) {
                //删除尾部
                p->prev->next = NULL;
                p->prev = NULL;
                break;
            }
            if (p->data == x) {
                //中间删除
                p->prev->next = p->next;
                p->next->prev = p->prev;
                break;
            }
            p = p->next;
        }
    }
    p = head; //指向首结点
    while (p != NULL) {
        //遍历链表
        cout << p->data << ' ';
        p = p->next;
    }
    return 0;
}
