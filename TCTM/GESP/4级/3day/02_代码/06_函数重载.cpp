#include <iostream>
using namespace std;
void add(int a,int b){
	cout<<a+b<<endl;
}
void add(double a, double b){
	cout<<a+b<<endl;
}
int main(){	
	add(5,3);
	add(7.5,3.2);
	return 0;
}




