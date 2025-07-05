 #include <iostream>
using namespace std;
struct st{
	char c;
	int id;
	double s;
}a={'a',1,80}; 

struct sd{
	char c[5];
	int i;
}b={"1234",100}; 

int main() {
	cout<<sizeof(a.c)<<endl;//1
	cout<<sizeof(a.id)<<endl; //4
	cout<<sizeof(a.s)<<endl; //8
	cout<<sizeof(a)<<endl; //16
	
	cout<<sizeof(b.c)<<endl;//5
	cout<<sizeof(b.i)<<endl; //4
	cout<<sizeof(b)<<endl; //12
	
	return 0;
}
