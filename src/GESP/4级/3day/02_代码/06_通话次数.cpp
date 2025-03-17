#include<iostream>
using namespace std;
struct con{
	string name;
	int cnt;
}a[2010];
int main(){
	int n;
	cin>>n;
	string x;
	for(int i=0;i<n*2;i++){
		cin>>x;
		bool f=false;
		for(int j=0;j<=i;j++){
			if(a[j].name==x){
				f=true;
				a[j].cnt++;
				break;
			}
		}
		if(!f){
			a[i].name=x;
			a[i].cnt=1;
		}	
	}
	// 找最多的通话次数
	int max=0;
	string maxn="";
	for(int i=0;i<n*2;i++){
		if(max<a[i].cnt){
			max=a[i].cnt;
			maxn=a[i].name;
		}
	}
	cout<<maxn<<" "<<max;	
	return 0;
}
