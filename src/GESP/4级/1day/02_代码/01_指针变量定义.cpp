#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int *p;
	p = &a;
	cout << p << endl;
	cout << &a << endl;
	cout << &p << endl;

	// 连续定义多个
	int c = 10, d = 20;
	int *p2 = &c, *p3 = &d;
	// p4是指针类型，p5是int类型
	int *p4, p5;
	
	double e = 1.5;
	//	int *p6=&e;
	double *p6 = &e;
	
	
	cout << sizeof(p) << endl;
	
	double f = 10.5;
	double *p7 = &f;
	cout << sizeof(p7) << endl;

	char ch = 'a';
	char *p8 = &ch;
	cout << sizeof(p8) << endl;



	return 0;
}
