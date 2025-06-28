#include <iostream>
#include <exception>
using namespace std;

int main() {
	//异常出现
//	int a = 100, b = 0;
//	int c = a / b;
//	cout << c << endl;
//	cout << a << ' ' << b << endl;

	
	try {
		int n,m;
		cin>>n>>m;
		if(m==0) throw m;
		cout<<n/m<<endl;
		double a,b;
		cin>>a>>b;
		if(b==0) throw b;
		cout<<a/b<<endl;
		string str="i love tctm!";
		int i;
		cin>>i;
		if(i>11) throw "error";
		cout<<str.at(i)<<endl;
	} catch (int e) {
		cout<<"除数为"<<e<<endl;
	} catch(double f){
		cout<<"除数为0.0"<<f<<endl;
	} catch(...){
		cout<<"下标越界"<<endl;
	}
	cout<<"我是下方的代码！"<<endl;

	return 0;
}
