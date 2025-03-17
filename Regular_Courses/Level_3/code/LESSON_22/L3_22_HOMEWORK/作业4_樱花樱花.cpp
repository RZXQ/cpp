#include<iostream>
#include<cstdio>
using namespace std;
const int M = 10086001;
int f[5001];
long long s[5001]; //ǰ׺��
int num, ans;

int main() {
    int n, t, i, j, p, k;
    cin >> n >> k;
    s[0] = f[0] = 1;
    for (i = 1; i <= k; i++) {
        cin >> t;
        for (j = 1; j <= n; j++) //����ǰ׺��
            s[j] = s[j - 1] + f[j];

        for (p = n; p >= 0; p--) //���ر���
            f[p] = (f[p] + s[p - 1] - s[p - min(t, p) - 1]) % M; //����ǰ׺��
        num += t; //�ж��Ƿ��н�
        ans = (ans + f[n]) % M; //�ۼӵ�i�������ռ�n�仨�ķ���	
    }
    if (num < n)
        cout << "impossible";
    else
        cout << ans;
    return 0;
}
