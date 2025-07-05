#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int m = 0;
	cin >> m;
	for (int i = 1; i <= m; i++) {
		int n = 0;
		cin >> n;
		//确定数字的位数
		int t = n, l = 0;
		while (t != 0) {
			t /= 10;
			l++;
		}
		//累加每位数的l次方
		int sum = 0;
		t = n;
		while (t != 0) {
			int d = t % 10;
			t /= 10;
			sum += pow(d, l);
		}
		//判断累加和是否和n相等，相等输出T，否则输出F
		if (sum == n)
			cout << "T" << endl;
		else
			cout << "F" << endl;
	}
	return 0;
}

