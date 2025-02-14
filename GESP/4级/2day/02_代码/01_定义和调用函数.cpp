#include <iostream>
using namespace std;
int bigger(int a){
	a *= 2;
	return a;
}
int main(){
	int s=bigger(5);
	cout<<s<<endl;
	return 0;
}

