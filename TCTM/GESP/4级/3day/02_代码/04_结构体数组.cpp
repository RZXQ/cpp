#include <iostream>
using namespace std;
struct stu {
	int id;
	char name[15];
	double score;
};


int main() {
	//结构体数组
	stu a[3] = {{1,"yaya",98},{2,"qiqi",82.5},{3,"lili",89}};
	cout << a[0].id << endl;
	cout << a[0].name << endl;
	cout << a[0].score << endl;
		
	return 0;
}
