#include <iostream>
using namespace std;
int main() {
	for(int i=1; i<=10; i++){
		if(i==5) break;
		cout<<i<<" ";
	}
	//下方代码会报错
//	cout<<i;
	return 0;
}
