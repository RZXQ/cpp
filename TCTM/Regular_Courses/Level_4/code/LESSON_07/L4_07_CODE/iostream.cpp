#include <bits/stdc++.h>
//#include <fstream>
using namespace std;
ifstream fin("test.in");
ofstream fout("test.out");

int main() {
    int n;
    fin >> n;
    //	scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    fout << sum;
    //	printf("%d",sum);

    fin.close();
    fout.close();

    return 0;
}
