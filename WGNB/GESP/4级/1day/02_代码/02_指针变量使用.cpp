#include <iostream>
using namespace std;
int main() {
	
	int a = 10;
	int *p = &a;
	//获取该指针所指空间的数据
	cout << *p << endl;

	//通过指针修改数据		
	*p = 20;
	cout << *p << endl;
	cout << a << endl;

	return 0;
}
