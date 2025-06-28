#include <iostream>
using namespace std;
int g=1000;
void func(){
	g+=100;
}
int main() {
	func();
	g+=100;
	cout<<g<<endl;
	return 0;
}
