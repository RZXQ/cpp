#include<iostream>
using namespace std;
int main() {
	int n = 0;
	cin>>n;
	int cube[21][21]={0}; 
	int x=0, y=n/2;
	cube[x][y] = 1; // 第 1 步，第一行正中填写 1 
	for (int d = 2;d<=n*n;d++) {
		int nx = (x+n-1)%n;
		int ny = (y+1)%n; // 第 2 步，向右上移动一格
		if (cube[nx][ny]!=0) {
			nx = (x+1)%n; // 第 3 步，如果第 2 步失败，向下移动一格
			ny = y;
		}
		cube[nx][ny] = d; // 填写下一个数字
		x = nx;
		y = ny;
	}
	//输出幻方
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++) 
			cout<<cube[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}

