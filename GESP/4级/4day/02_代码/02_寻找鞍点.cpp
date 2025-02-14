#include <iostream>
using namespace std;
int a[100][100];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	int x=0,y=0;// 记录鞍点位置
	bool f=true;// 标记是否找到鞍点
	for(int i=1;i<=n;i++){
		f=true;// 假设每次能找到
		x=i;y=1;
		// 先在每行找最大
		for(int j=1;j<=m;j++)
			if(a[i][j]>a[x][y])y=j;
		// 再判断a[x][y]是否为所在列最小
		for(int h=1;h<=n;h++){
			if(a[h][y]<a[x][y]){
				f=false;
				break;
			}
		}
		if(f)break;// 鞍点是唯一的，找到鞍点退出整个循环
	}
	if(f)cout<<x<<" "<<y<<" "<<a[x][y];
	else cout<<"none";
	return 0;
}
