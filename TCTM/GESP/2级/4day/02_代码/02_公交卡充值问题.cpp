#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>=200&&n<300){
		cout<<n+50;
	}
	else if(n>=300&&n<500){
		cout<<n+100;
	}
	else if(n>=500){
		cout<<n+200;
	}
	else {
		cout<<n;
	}	
	return 0;
	
}
