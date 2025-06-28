#include <iostream>
using namespace std;
int main() {
	//1.指针与数组
//	int arr[5] = {1, 2, 3, 4, 5};
//	int *p = arr;
//	cout<<*p<<endl;
//	*p =100;
//	for(int i=0;i<5;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
	
	//2.直接使用指针访问数组元素
//	int arr[5] = {1, 2, 3, 4, 5};
//	int *p=arr;
//	cout<<p[1]<<endl;
//	p[2]=150;
//	for(int i=0;i<5;i++)
//		cout<<p[i]<<" ";
//	cout<<endl;
	
	//3.指向数组元素的指针
	int arr[5]={1,2,3,4,5};
	int *p1=&arr[1];
	*p1=arr[4];
	cout<<*p1;
	return 0;
}
