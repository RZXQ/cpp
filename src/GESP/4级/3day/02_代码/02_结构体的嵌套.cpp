#include <iostream>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};

struct teacher {
	int id;
	string name;
	int age;
	struct student stu;
};

int main(){
	//结构体嵌套结构体
	teacher t = {100, "大白", 45};
	t.stu.name = "小童";
	t.stu.age = 12;
	t.stu.score = 100;
	cout << t.name << " " << t.id << " " << t.age << endl;
	cout << t.stu.name << " " << t.stu.age << " "  << t.stu.score << endl;	
	
	
	
	
	return 0;
}
