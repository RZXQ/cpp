#include <iostream>
using namespace std;
int main(){
	
	//输出3行5列矩形
	for(int i=1; i<=3; i++){
		for(int j=1; j<=5; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	//输出5行直角三角形
	for(int i=1; i<=5; i++){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	//输出5行等腰直角三角形
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5-i; j++)
			cout<<' ';
		for(int k=1; k<=2*i-1; k++)
			cout<<"*";
		cout<<endl;
	}
	
	return 0;
}
