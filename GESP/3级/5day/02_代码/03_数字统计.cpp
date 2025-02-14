#include <iostream>
using namespace std;
int main(){
	int l,r;
	cin>>l>>r;
	int cnt=0;
	for(int i=l;i<=r;i++){
		int j=i;
		while(j>0){
			int n=j%10;
			if(n==2) cnt++;
			j=j/10;
		}
	}
	cout<<cnt;
	return 0;
}
