#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int array[], int n){
	for (int i=n;i>1;i--)
		for (int j =0; j<i-1; j++) // 在此处填入代码
			if(array[j]>array[j+1]){
		int t=array[j];
		array[j]=array[j+1];
		array[j+1]=t;
	}
} 

void SelectionSort(int array[], int n){
	int i,j,min,temp;
	for(int i=0; i<n-1; i++){
		min=i;
		for(int j=i+1; j<n; j++)
			if(array[min]>array[j])
				min=j;
		temp=array[min];
		array[min]=array[i];
		array[i]=temp;
	}
}

int main(){
	
	int a[5]={3,4,1,6,2};
//	BubbleSort(a,5);
	SelectionSort(a,5);
	for(int i=0; i<=4; i++) cout<<a[i]<<" ";
	
	
	
	return 0;
}
