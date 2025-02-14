#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main(){
	//max函数
	cout<<max(5,10)<<endl;
	cout<<max(3.14,5.8)<<endl;
	cout<<max('A','C')<<endl;
	
	//min函数
	cout<<min(5,10)<<endl;
	cout<<min(3.14,5.8)<<endl;
	cout<<min('A','C')<<endl;
	
	//rand()函数
	srand(time(0)); 
	cout<<rand()<<endl;
	cout<<rand()% 5<<endl;
	cout<<1 + rand()% 5<<endl;
	//cout<<5 + rand()% (10-5+1)<<endl;
	cout<<5 + rand()% 6<<endl;
	return 0;
}
