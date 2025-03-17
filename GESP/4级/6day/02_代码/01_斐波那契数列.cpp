#include <iostream>
using namespace std;
int fib(int n){
	if(n==1||n==2)return 1;
	return fib(n-1)+fib(n-2);
}
int main(){
	int n;
	cin>>n;
	
	//变量+循环
	int a=1,b=1;
	int c=0;
	for(int i=3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c<<endl;
	
	//数组+循环
	int fibs[50]={0};
	fibs[1]=1;
	fibs[2]=1;
	for(int i=3;i<=n;i++){
		fibs[i]=fibs[i-2]+fibs[i-1];
	}
	cout<<fibs[n]<<endl;
	
	//递归求解
	cout<<fib(n);
	return 0;
}


