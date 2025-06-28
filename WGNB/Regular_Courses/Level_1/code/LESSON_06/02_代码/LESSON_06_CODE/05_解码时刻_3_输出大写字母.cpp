#include <iostream>
using namespace std;

int main() {
    for (int i = 'A'; i <= 'Z'; i++) {
        char c = i;
        cout << c << " ";
    }
    cout << endl;
    for (int i = 'Z'; i >= 'A'; i--) {
        char c = i;
        cout << c << " ";
    }


    //	for(char i='A'; i<='Z'; i++){
    //		cout<<i<<" ";
    //	}
    //	cout<<endl;
    //	for(char i='Z'; i>='A'; i--){
    //		cout<<i<<" ";
    //	}
    return 0;
}
