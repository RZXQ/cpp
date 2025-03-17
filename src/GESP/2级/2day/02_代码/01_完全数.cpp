#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin >> n>> m;
	for(int i=n;i<=m;i++){
		int s=0; 
		for(int j=1;j<i;j++){ 
			if(i%j==0) s+=j;
		} 
		if(s==i) cout << i << " ";
	} 
	return 0;
}

