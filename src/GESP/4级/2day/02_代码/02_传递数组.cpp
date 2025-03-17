#include <iostream>
using namespace std;
//void printArr(int a[],int n){
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}
void printArr(int* a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void addOne(int a[],int n){
	for(int i=0;i<n;i++)
		a[i]+=1;
}
int main(){	
	int a[5]={1,2,3,4,5};
	printArr(a,5);
	
	addOne(a,5);
	cout<<endl;
	for(int i=0; i<5; i++){
		cout<<a[i]<<" ";
	}	
	return 0;
}
