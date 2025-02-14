#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[5]={77,45,26,86,9}; 
	for(int i=0;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(a[j]>a[j+1]){  //升序
				swap(a[j],a[j+1]);
			}
		}	
	}
	for(int i=0;i<5;i++) cout<<a[i]<<' ';

	return 0;
}

    
