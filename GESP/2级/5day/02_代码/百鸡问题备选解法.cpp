#include <iostream>
using namespace std;
int main() {
	int x, y, z, n, m;
	cin>>x>>y>>z>>n>>m;
	int cnt=0;
	for(int a=0; a<=n/x; a++){
		for(int b=0; b<=n/y; b++){
			int c=(n-a*x-b*y)*z;
			if(a+b+c==m&&a>=0&&b>=0&&c>=0) cnt++;
		}
	}    
	cout<<cnt;
	return 0;
}
