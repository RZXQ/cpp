#include <iostream>
using namespace std;
int main(){
	int a,b,l;
	cin>>a>>b>>l;
	int k1=1000000;
	int k2=1;
	for(int i=1;i<=l;i++){
		for(int j=l;j>=1;j--){
			if((i*b>=j*a)&&(abs(i*b-j*a)<abs(k1*b-k2*a))){
				k1=i;
				k2=j;
			}
		}
	}
	cout<<k1<<" "<<k2;
	return 0;
}
