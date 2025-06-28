#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char b;
	if(n%123>=97&&n%123<=122)
		b=n%123;
	else if(n%91>=65&&n%91<=90)
		b=n%91;
	else
		b='*';
	cout<<b;
	return 0;
}
