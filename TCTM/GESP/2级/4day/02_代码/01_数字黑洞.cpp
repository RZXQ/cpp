#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int t=0;
	while(n!=495){
		int a=n%10, b=n/10%10, c=n/100;
		if(a>b) swap(a,b);
		if(a>c) swap(a,c);
		if(b>c) swap(b,c);
		int tmax=c*100+b*10+a;
		int tmin=a*100+b*10+c;
		n=tmax-tmin;
		t++;
	}
	cout<<t;
	return 0;
}
