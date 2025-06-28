#include <iostream>
using namespace std;
int main(){
//	int n=10;
//	int sum=0;
	
	//时间复杂度O(1)
//	sum+=n;
//	sum+=n;
//	sum+=n;
	
	//时间复杂度O(n)
//	for(int i=0;i<n;i++){
//		sum+=i;
//	}
	
	//时间复杂度O(n2)
//	int a[100][100]={0};
//	int n=10;
//	for(int i=1; i<=n; i++)
//		for(int j=1; j<=n; j++)
//			cout<<a[i][j]<<' ';
//	cout<<endl;
	
	//时间复杂度O(log2n)或者O(logn)
//	int i=1;
//	n=10;
//	while(i<n){
//		i*=2;
//	}


	
	long long cnt=0;
	int n=100000;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
