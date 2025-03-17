#include <iostream>
using namespace std;
int main(){
	// 指针和指针的运算
	int arr[5] = {1, 2, 3, 4, 5};
	
	int *p1=&arr[1];
	int *p2=&arr[4];
	cout<<p2-p1<<endl;
	
	
	
	return 0;
}
