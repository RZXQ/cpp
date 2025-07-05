#include <iostream>
using namespace std;
int main(){ 
	int m,d;
	cin>>m>>d;
	if(m==1){
		if(d>=1&&d<=24) cout<<"Pig";
		else cout<<"Mouse";
	}else{
		cout<<"Mouse";
	}
	return 0;
}
