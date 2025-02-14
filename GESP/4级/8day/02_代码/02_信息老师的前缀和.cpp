#include <bits/stdc++.h>
using namespace std;
int sum[100005];
int func(int x){
	int cnt=0;
	while(x!=0){
		if(x%10==1)cnt++;
		x/=10;
	}
	return cnt;
}
int main(){
	for(int i=1;i<=100000;i++){
		int cnt=func(i);
		sum[i]=sum[i-1]+cnt;
	}
	int n;
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		cout<<sum[b]-sum[a-1]<<endl;
	}
	return 0;
}

