#include <iostream>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	if(a>=1&&a<=12){
		if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
			if(b>=1&&b<=31) cout<<"yes";
			else cout<<"no";
		}
		else if(a==4||a==6||a==9||a==11){
			if(b>=1&&b<=30) cout<<"yes";
			else cout<<"no";
		}
		else{
			if(b>=1&&b<=29) cout<<"yes";
			else cout<<"no";
		}	
	}else cout<<"no";
	return 0;
}
