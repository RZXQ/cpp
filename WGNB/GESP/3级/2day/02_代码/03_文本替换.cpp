#include <bits/stdc++.h>
using namespace std;
int main() {
	string s, s1, s2;
	getline(cin, s); 
	getline(cin, s1);
	getline(cin, s2);
	for (int i = 0; (i = s.find(s1, i)) >= 0; i += s2.size()) {
		s.replace(i, s1.size(), s2);
		cout << i << ' ' << s <<endl;
	}
	cout << s;




	return 0;
}

