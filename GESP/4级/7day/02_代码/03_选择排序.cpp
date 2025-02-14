#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[5]={77,45,26,86,9}; 
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(a[i]>a[j]){ //升序
				swap(a[i],a[j]);
			}
		} 
		
	}
	for(int i=0;i<5;i++)cout<<a[i]<<' ';	
	return 0;
}
