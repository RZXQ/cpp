#include <iostream>
using namespace std;
bool is_prime(int num) {
	if (num < 2)
		return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}
int main() {
	int a = 0, b = 0;
	cin >> a >> b;
	for (int num = a; num <= b; num++) {
		if (is_prime(num)) {
			int reversed_num = (num % 10) * 10 + num / 10;
			if (is_prime(reversed_num))
				cout << num << endl;
		}
	}
	return 0;
}

