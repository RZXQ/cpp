#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){
	string s;
	cin>>s;
	int max=0;
	int cnt=1;
	char a;
	for(int i=0;i<s.length();i++){
		if(s[i]==s[i+1]){
			cnt++;
			if(cnt>max){
				max=cnt;
				a=s[i];
			}
		}
		else cnt=1;
	}
	cout<<a<<" "<<max;
	
	return 0;
}

