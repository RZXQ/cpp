#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;    
	// 依次报到m次
	bool arrive[1000]={0};
	int code;
	for(int i=0;i<m;i++){
		cin>>code;
		arrive[code]=1;
	}
	// 依次检查n位同学是否到达
	bool all=1;
	for(int i=0;i<n;i++){
		if(arrive[i]==0){    
			cout<<i<<" ";
			all=0;
		}
	}
	// 处理全部到达的特殊情况
	if(all) cout<<n;
	return 0;
}  

