#include <iostream>
using namespace std;
void xchg(int *x, int *y){
	int t=*x;
	*x=*y;
	*y=t;
}
int fun1(int *n){
	return *n**n;
}
int main(){
	int a=10, b=20;
	xchg(&a,&b);
	cout<<a<<" "<<b<<endl;
	
	int arr[10]={2};
	arr[1]=fun1(arr);
	cout<<arr[1]<<endl;
	return 0;
}

