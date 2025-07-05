#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	//以读取方式打开输入文件
	freopen("test.in","r",stdin);
	//以写入方式打开输出文件
	freopen("test.out","w",stdout);
	//正常业务代码
	int a,b;
	cin>>a>>b;
	cout<<a * b;
	//关闭输入输出文件
	fclose(stdin); 
	fclose(stdout);
	return 0;
} 
