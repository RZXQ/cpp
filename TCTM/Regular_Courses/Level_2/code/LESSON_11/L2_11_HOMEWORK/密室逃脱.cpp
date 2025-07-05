#include<iostream>
using namespace std;
char a[1000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int front = 0, rear = n;
    while (front < rear) {
        cout << a[front] << ' ';
        front++;
        a[rear++] = a[front++];
    }
    return 0;
}
