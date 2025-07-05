#include <bits/stdc++.h>
using namespace std;
int main(){
	ofstream fout;
	fout.open("1.txt");
	for(int i=1; i<=10; i++){
		if(i%5==0){
			int x=6;
			fout<<x;
		}else{
			char ch='A';
			fout<<ch;
		}
	}
	
	
	
	
	return 0;
}
