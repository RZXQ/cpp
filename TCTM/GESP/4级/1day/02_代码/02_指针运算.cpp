#include <iostream>
using namespace std;
int main(){
	//指针和整数的运算
	int arr[5] = {1, 2, 3, 4, 5};
	int *p = arr;
	cout<<p<<endl;
	cout<<p+1<<endl;
	cout<<*(p+1)<<endl;
	
	// 使用指针运算遍历数组
	for(int i=0;i<5;i++){
		cout<<*(p+i)<<" ";
	}
	
	// 使用数组名运算遍历数组
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<*(arr+i)<<" ";
	}
	

	return 0;
}
