#include <iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int age,sum=0;
	if(m>=4&&m<=10){
		for(int i=1; i<=n; i++){
			cin>>age;
			if(age>=18&&age<=60) sum+=60;
			else if(age<18) sum+=30;
			else sum+=20;			
		}	
	}else{
		for(int i=1; i<=n; i++){
			cin>>age;
			if(age>=18&&age<=60) sum+=40;
			else sum+=20;			
		}
	}
	cout<<sum;
	return 0;
}
