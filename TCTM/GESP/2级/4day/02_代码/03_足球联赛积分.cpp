#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x,y;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		if(x>y){
			sum+=3;
		}else if(x==y){
			sum+=1;
		}
	}
	cout<<sum;
	return 0;
}
