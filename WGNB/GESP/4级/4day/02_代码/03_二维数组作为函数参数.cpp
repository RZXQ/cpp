#include <iostream>
using namespace std;
void printEle(int arr[][4]){
	for(int i=0; i<4; i++)
		for(int j=0; j<4; j++)
			cout<<arr[i][j]<<" ";
}
int main(){
	int arr[4][4]={0};
	printEle(arr);
	
	return 0;
}
