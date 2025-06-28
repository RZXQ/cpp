#include <iostream>
using namespace std;
//定义bigger函数，将数字翻2倍
int bigger(int a) {
	a *= 2;
	return a;
}

int main() {
//	int s=bigger(5);
//	cout<<s<<endl;


	//使用变量作为实参
	int b=6;
	int s=bigger(b);
	cout<<s<<endl;
	return 0;
}
