#include<bits/stdc++.h>
using namespace std;
string s[5];
int slen, mlen;
int letters[27];
int main() {
	freopen("bar.in", "r", stdin);
	freopen("bar.out", "w", stdout);
	for (int i = 1; i < 5; i++) {
		getline(cin, s[i]);
		slen = s[i].size();
		for (int j = 0; j < slen; j++) {
			if (s[i][j] >= 'A' && s[i][j] <= 'Z') {
				letters[s[i][j] - 'A']++;
			}
		}
	}
	
	for (int i = 0; i < 26; i++) {
		mlen = max(letters[i], mlen);
	}
	for (int i = mlen; i > 0; i--) {
		for (int j = 0; j < 25; j++) {
			if (letters[j] < i) cout << "  ";
			else cout << "* ";
		}
		if (letters[25] < i) cout << " ";
		else cout << "*";
		cout << endl;
	}
	for (int i = 'A'; i < 'Z'; i++) {
		cout << char(i) << " ";
	}
	cout << 'Z';
	fclose(stdin);
	fclose(stdout);
	return 0;
}





