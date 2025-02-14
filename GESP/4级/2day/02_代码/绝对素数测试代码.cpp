#include <bits/stdc++.h>
using namespace std;
bool f(int a){
	for(int i=2; i<a; i++)
		if(a%i==0) return 0;
	return 1;
}
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a; i<=b; i++){
		if(f(i)){
			int x=(i%10)*10+i/10;
			if(f(x)) cout<<i<<endl;
		}
	}
	
	
	
	
	return 0;
}
