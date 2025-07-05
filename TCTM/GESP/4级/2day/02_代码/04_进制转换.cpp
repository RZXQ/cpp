#include <bits/stdc++.h>
using namespace std;
//字符转数字
int trans_digit(char c){
	if(c<='9') return(c-'0');
	return (c-'A'+10);
}
//进制转换
long long trans(int k, char str[]){
	int l=strlen(str);
	long long res=0, pw=1;
	for(int i=l-1; i>=0; i--){
		res+=pw*trans_digit(str[i]);
		pw*=k;
	}
	return res;
}
int main(){
	int n=0;
	cin>>n;
	for(int t=0;t<n;t++){
		int k=0;
		char str[10];
		cin>>k>>str;
		cout<<trans(k,str)<<endl;
	}
	return 0;
}
