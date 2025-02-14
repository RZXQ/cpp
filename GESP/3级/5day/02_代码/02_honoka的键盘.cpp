#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ans=0;
	for(int i=0;i<n;i++){
		if(s[i]=='V' && s[i+1]=='K'){
			ans++;
			s[i]='X';
			s[i+1]='X';
		}
	}
	for(int i=0;i<n;i++){
		if(s[i]!='X' && s[i]==s[i+1]){
			ans++;
			break;
		}
	}
	cout<<ans;
	return 0;
}
