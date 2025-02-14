#include <bits/stdc++.h>
using namespace std;
int trans(int t){
	if(t==0) return 0;
	return (t*7-1)%9+1;
}
bool judge(long long x){
	int sum=0;
	for(int d=1; x>0; d++, x/=10){
		int t=(int)(x%10);
		if(d%2==0) sum+=t;
		else sum+=trans(t);
	}
	return (sum%8==0);
}	
int main() {
	int N=0;
	cin>>N;
	for(int n=0; n<N; n++){
		long long x=0;
		cin>>x;
		if(judge(x)) cout<<"T"<<endl;
		else cout<<"F"<<endl;
	}
	return 0;
}
