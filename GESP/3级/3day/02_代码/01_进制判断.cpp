#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){		
		cin>>s;
		char maxc='0';
		for(int j=0;j<s.length();j++){			
			if(maxc<s[j])maxc=s[j];
		}
		cout<<(maxc<='1')<<" ";
		cout<<(maxc<='7')<<" ";
		cout<<(maxc<='9')<<" ";
		cout<<(maxc<='F')<<endl;
	}
	return 0;
}
	
	
	

