#include <iostream>
using namespace std;
bool check(string str){
	if(str.length()>12||str.length()<6)return false;
	// 标记是否含大写字母 小写字母 数字 特殊符号
	bool hasC=false,hasL=false,hasD=false,hasS=false;
	for(int i=0;i<str.length();i++){
		if('A'<=str[i]&&str[i]<='Z')hasC=true;
		else if('a'<=str[i]&&str[i]<='z')hasL=true;
		else if('0'<=str[i]&&str[i]<='9')hasD=true;
		else if(str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='$')
			hasS=true;
		else return false; // 含有其他字符，不合法
	}
	// 判断大写字母、小写字母和数字必须至少有其中两种
	if(hasC+hasL+hasD<2)return false;
	// 判断以及至少有四个特殊字符!@#$中的一个
	if(!hasS)return false;
	return true;
}
int main(){
	string line;
	cin>>line;
	int pos=line.find(',');
	int begin=0;
	string pwd="";
	while(pos!=-1){
		for(int i=begin;i<pos;i++)pwd+=line[i];
		if(check(pwd))cout<<pwd<<endl;
		begin=pos+1;
		pos=line.find(',',begin);
		pwd="";
	}
	for(int i=begin;i<line.length();i++)pwd+=line[i];
	if(check(pwd))cout<<pwd;
	return 0;
}
