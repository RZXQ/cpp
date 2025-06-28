#include <iostream>
using namespace std;
int a[15][15];
int main(){
	int n,m;
	cin>>n>>m;
	// 第一行设置为1
	for(int i=0;i<=n;i++)a[i][0]=1;
	// 第一列设置为1
	for(int j=0;j<=m;j++)a[0][j]=1;
	// 根据递推公式计算路径
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}	
	cout<<a[n][m];
	return 0;
}
