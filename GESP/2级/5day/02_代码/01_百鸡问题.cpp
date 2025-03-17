#include <iostream>
using namespace std;
int main(){
	int x,y,z,n,m,cnt=0;
	cin>>x>>y>>z>>n>>m;
	for(int a=0; a*x<=n&&a<=m; a++){
		for(int b=0; a*x+b*y<=n&&a+b<=m; b++){
			int c=(n-a*x-b*y)*z;
			if(a+b+c==m) cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
