#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[101]={0};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		bool flag = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j],a[j+1]);
				cnt++;  
				flag = true;
			}
		}
		if(!flag) break;
	}
	cout << cnt;
	return 0;
}
