#include <iostream>
using namespace std;
//void SWAP(int a,int b){
//	int t=a;
//	a=b;
//	b=t;
//}

void SWAP(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int main(){	
	int x=10;
	int y=20;
	SWAP(&x,&y);
	cout<<x<<" "<<y<<endl;
	return 0;
}
