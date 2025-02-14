#include <bits/stdc++.h>
using namespace std;
int a[5];
int main() {
	
	
	//下标越界
	int arr[5] = {1, 2, 3, 4, 5};
	cout << arr[6] << endl;
	cout << arr[-4] << endl;
	
	//可以给元素赋值，不可以给数组名赋值
//	int a[5] = {};
//	a = {1,2,3,4,5}; 错误
//	a[0] = 1;
//	a[1] = 2;
//	a[2] = 3;
//	a[3] = 4;
//	a[4] = 5;
//	

	// 垃圾数据
	int a[5];
	for (int i = 0; i < 5; i++) {
		cout << a[i] << ' ';
	}		
	return 0;
}
