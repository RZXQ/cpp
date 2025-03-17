#include <iostream>
using namespace std;
//引用参数
void SWAP(int &a,int &b){
	int t=a;
	a=b;
	b=t;
}
int main(){
	int b=200;
	int &q=b;
	cout<<b<<" "<<q<<endl;
	cout<<&b<<endl;
	cout<<&q<<endl;
	q=500;
	cout<<b<<" "<<q<<endl;
	
	int x=10;
	int y=20;
	SWAP(x,y);
	cout<<x<<" "<<y<<endl;
	return 0;
}
