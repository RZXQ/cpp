#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(pow(a,2)+pow(b,2)==pow(c,2))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
