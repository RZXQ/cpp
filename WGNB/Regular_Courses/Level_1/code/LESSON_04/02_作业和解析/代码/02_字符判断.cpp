#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z') cout << "capital";
    else if (c >= 'a' && c <= 'z') cout << "lowercase";
    else if (c >= '0' && c <= '9') cout << "number";
    else cout << "others";
    return 0;
}
