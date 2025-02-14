#include <iostream>
using namespace std;
int main(){
	int a[3][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	cout<<a[1][2]<<endl;
	cout<<a[0][5]<<endl;
	
	//越界
//	cout<<a[3][1]<<endl;
//	cout<<a[2][5]<<endl;
	
	//查看二维数组所占内存大小
	cout<<sizeof(a)<<endl;
	
	
	
	return 0;
}
