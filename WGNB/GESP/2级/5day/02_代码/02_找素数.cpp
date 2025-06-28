#include <iostream>
using namespace std;
int main() {
	int a = 0, b = 0, cnt = 0;
	cin >> a >> b;
	for (int n = a; n <= b; n++) {
		bool flag = true;
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				flag = false;
				break;
			}
		}
		if (flag) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
