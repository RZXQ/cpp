#include <iostream>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};

//值传递
//void stuInfo(student s) {
//	cout << s.name << endl;
//	s.name = "小白";
//}
//指针传递
//void stuInfo(student *s) {
//	cout << s->name << endl;
//	s->name = "小白";
//}
//const使用
void stuInfo(const student *s) {
	cout << s->name << endl;
//	s->name = "小白";
}

int main(){
	//值传递
//	student s = {"小童", 12, 100};
//	stuInfo(s);
//	cout << s.name;

	//指针传递
//	student s = {"小童", 12, 100};
//	student *p = &s;
//	stuInfo(p);
//	cout << s.name;

	//const使用
	student s = {"小童", 12, 100};
	student *p = &s;
	stuInfo(p);
	cout << s.name;
	
	
	
	
	return 0;
}
