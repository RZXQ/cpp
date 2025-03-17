#include <iostream>
using namespace std;
int a[21][21];
int main(){
	int n;
	cin>>n;
	int m=1;
	for(int k=0;k<=2*n-2;k++){
		if(k%2==0){ 			
			// 对角线的k为偶数，由上往下沿对角线填数
			for(int i=0;i<n;i++){
				//计算得到列下标
				int j=k-i;
				if(j>=0&&j<n){
					a[i][j]=m;
					m++;
				}
			}
		}else{ 
			// 对角线的k为奇数，由下往上沿对角线填数
			for(int i=n-1;i>=0;i--){
				//计算得到列下标
				int j=k-i;
				if(j>=0&&j<n){
					a[i][j]=m;
					m++;
				}
			}
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
