#include <iostream>
using namespace std;
int main(){
	int a,c,e,g;
	char b,d,f;
	//按顺序输入四个十进制数和点分隔符
	cin>>a>>b>>c>>d>>e>>f>>g;
	//判断四个十进制数是否全部都在0~255之间
	if((a>=0&&a<=255)&&(c>=0&&c<=255)&&(e>=0&&e<=255)&&(g>=0&&g<=255))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
