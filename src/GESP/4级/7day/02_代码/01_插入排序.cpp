#include <iostream>
using namespace std;
int main(){
	int a[5]={77,45,26,86,9};
	for(int i=1;i<5;i++){
		int x=a[i];
		int j;
		//升序
		for(j=i-1;j>=0;j--){
			if(a[j]>x){
				a[j+1]=a[j];
			}else break;
		}
		a[j+1]=x;
	}
	
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}
