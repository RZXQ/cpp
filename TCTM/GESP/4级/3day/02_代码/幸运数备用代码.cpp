#include <bits/stdc++.h>
using namespace std;
int trans(int t){
	if(t==0) return 0;
	return (t*7-1)%9+1;
}
bool func(long long num){
	int sum=0;
	int i=0;
	while(num!=0){
		i++;
		int t=int(num%10);
		num/=10;
		if(i%2==0) sum+=t;
		else sum+=trans(t);	
	}
	return (sum%8==0);
}


int main(){
	int n;
	cin>>n;
	long long num;
	for(int i=1; i<=n; i++){
		cin>>num;
		if(func(num)) cout<<"T"<<endl;
		else cout<<"F"<<endl;
	}
	return 0;
}
