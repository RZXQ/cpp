#include <iostream>
using namespace std;
int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int *p = arr;
	
	//自增自减运算
//	cout<<*p++<<endl;
//	cout<<*++p<<endl;
//	
//	cout<<(*p)++<<endl;
//	cout<<++(*p)<<endl;
	
	//使用指针变量和++运算遍历数组
	for(int i=0;i<5;i++){
		cout<<*p++<<" ";
	}
	
	return 0;
}
