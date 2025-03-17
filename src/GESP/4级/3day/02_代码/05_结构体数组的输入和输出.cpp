#include <iostream>
using namespace std;
struct stu {
	int id;
	char name[15];
	double score;
}a[3];

int main(){
	for(int i=0; i<3; i++)
		cin>>a[i].id>>a[i].name>>a[i].score;
	
	for(int i=0; i<3; i++)
		cout<<a[i].id<<" "<<a[i].name<<" "<<a[i].score<<endl;
	
	
	
	
	return 0;
}
