#include<iostream>
using namespace std;
int a[1001],b[1001];
int main(){
	int n;
	cin>>n;
	a[1]=9;
	b[1]=1;
	int k = 9;
	for(int i=2;i<=n;i++){
		if(i==n)    k=8;
		a[i]=(a[i-1]*k+b[i-1])%12345;
		b[i]=(b[i-1]*k+a[i-1])%12345;
	}
	cout<<a[n];
	return 0;    
} 

