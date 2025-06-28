#include <iostream>
using namespace std;
int main(){
	struct stu{
		int id;
		string name;
		double score;
	};
	
	stu a={1,"yaya",98.5};
	stu *p=&a;
	//直接访问结构体成员变量
	cout<<p->id<<endl;
	cout<<p->name<<endl;
	cout<<p->score<<endl;
	
	//通过指针修改成员变量
	p->score=100;
	cout<<p->score<<endl;
	
	return 0;
}
