#include <iostream>
using namespace std;

int main() {
	int m,t;
	cin>>m>>t;
	int ans=0;
	for(int i=1;i<=m;i++){
		int x=i;
		bool flag=true;
		while(x>0){
			if(x%10==t) flag=false;
			x/=10;
		}
		if(flag) ans++;
	}
	cout<<ans;
	return 0;
}
