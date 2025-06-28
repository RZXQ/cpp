#include <iostream>
using namespace std;

int main(){
	int n,i;
	cin>>n>>i;
	bool flag;
	int ans=0;
	int k=1;
	while(true){
		flag=true;
		ans=k*n+i;
		for(int j=1;j<n;j++){
			if(ans%(n-1)!=0){
				flag=false;
				break;
			}
			ans=ans/(n-1)*n+i;
		}
		if(flag) break;
		k++;
	}
	cout<<ans;
	return 0;
}
