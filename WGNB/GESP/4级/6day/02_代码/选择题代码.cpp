#include <iostream>
using namespace std;
int main(){	
	//01
//	int fib[10];
//	fib[0]=0;
//	fib[1]=1;
//	for(int i=2; i<10; i++)
//		fib[i]=fib[i-1]+fib[i-2];
//	cout<<fib[10]<<endl;
	
	
	//02
	int a[5];
	a[0]=1;
	for(int i=1;i<5;i++) 
		a[i]=a[i-1]*2;
	int sum = 0;
	for(int i=0;i<5;i+=2) 
		sum+=a[i];
	cout<<sum<<endl; 
	
	
	

	return 0;
}

