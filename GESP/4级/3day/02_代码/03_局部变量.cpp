#include <iostream>
using namespace std;
void func(int n){
	int a=0;
}
void func1(int n){
	int a=0;
	cout<<a;
}
int main(){
	int b=1;
	for(int i=1; i<=10; i++){
		int c=2;
	}
	func1(10);
	//下方代码会报错
//	cout<<a<<' '<<n;
	return 0;
}
