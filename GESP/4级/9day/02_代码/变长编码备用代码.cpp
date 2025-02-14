#include <bits/stdc++.h>

using namespace std;

string s = "0123456789ABCDEF"; // 字符和对应至值相互转换
int vc(char c) {return s.find(c);}
char cv(int v) {return s[v];}

void proc(string s) {
	int r = 0;
	for (size_t i = 0; i < s.length(); i++) {
		r *= 2;
		r += (s[i] - '0');
	}
	printf("%02X ", r);
}

int main() {
	int n; cin >> n;
	if (n) {
		string s = "";
		int ct = 0;
		while (n) {
			s = char((n % 2) + '0') + s;
			n /= 2;
			++ct;
			if (ct % 7 == 0) {
				if (n) s = '1' + s; 
				proc(s);			
				s = "";
			}
		}
		if (s != "") proc(s);
	} else cout << "00";
	return 0; 
}

