#include <iostream>
using namespace std;
int jar[1000];
int main() {
	int n = 0,d=0;
	cin>>n>>d;
	int a;
	for(int i=1;i<=d;i++){
		cin>>a;
		jar[a]+=i;
	}
	for(int i=0;i<n;i++)
		cout<<jar[i]<<" ";
	return 0;
}

