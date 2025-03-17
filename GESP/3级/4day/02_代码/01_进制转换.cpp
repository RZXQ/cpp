#include <bits/stdc++.h>
using namespace std;

char trans(int d){
	if(d<10) return (char)(d+'0');
	return (char)(d+'A'-10);
}
int main(){
	int n,r;
	cin>>n>>r;
	char res[30];
	int len=0;
	while(n>0){
		res[len]=trans(n%r);
		n/=r;
		len++;
	}
	for(int i=len-1;i>=0;i--)
		cout<<res[i];
	return 0;
}
