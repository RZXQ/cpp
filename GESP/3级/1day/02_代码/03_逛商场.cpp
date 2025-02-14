#include <bits/stdc++.h>
using namespace std;
int price[100];
int main(){
	int n=0, x=0,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++) 
		cin>>price[i];
	cin>>x;
	for(int i=0; i<n;i++){
		if(x>=price[i]){ 
			x-=price[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

