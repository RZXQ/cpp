#include <iostream>
using namespace std;
int bigger(int);
int main(){
	cout<<bigger(10);
	return 0;
}
int bigger(int a){
	a*=2;
	return a;
}
