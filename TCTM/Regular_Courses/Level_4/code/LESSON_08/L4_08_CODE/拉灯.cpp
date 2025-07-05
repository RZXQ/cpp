#include <bits/stdc++.h>
using namespace std;
int n, m, i, j, k, a[10][10], ans = 1e7, b[10][10];

int main() {
    cin >> n; //n������
    while (n--) {
        for (i = 1; i <= 5; i++) {
            //���ܣ���������
            for (j = 1; j <= 5; j++) {
                char ch;
                cin >> ch;
                b[i][j] = ch - '0';
            }
        }
        for (i = 0; i < (1 << 5); i++) {
            //���100000
            for (j = 1; j <= 5; j++) {
                //���ܣ�b�������ݸ�ֵ��a����
                for (k = 1; k <= 5; k++) a[j][k] = b[j][k];
            }
            int cnt = 0;
            for (j = 1; j <= 5; j++) {
                //����:
                if (i >> (j - 1) & 1) {
                    cnt++;
                    a[1][j - 1] ^= 1;
                    a[1][j + 1] ^= 1;
                    a[1][j] ^= 1;
                    a[2][j] ^= 1;
                }
            }
            for (j = 1; j <= 4; j++) //�м���1~4��������2~5����Ϊ�����ǿ���i+1�У������ǿ��Ƶ�i��
                for (k = 5; k >= 1; k--)
                    if (!a[j][k]) {
                        cnt++;
                        a[j][k] ^= 1; //����
                        a[j + 2][k] ^= 1; //����
                        a[j + 1][k] ^= 1; //����
                        a[j + 1][k + 1] ^= 1; //����
                        a[j + 1][k - 1] ^= 1; //����
                    }
            bool ok = true;
            for (j = 1; j <= 5; j++)
                for (k = 1; k <= 5; k++)
                    if (!a[j][k]) ok = false;
            if (ok) ans = min(ans, cnt);
        }
        if (ans > 6) cout << -1;
        else cout << ans;
        ans = 1e7;
        cout << endl;
    }
    return 0;
}

/*
2
0 0 1 1 1 
0 1 0 1 1 
1 0 0 0 1 
1 1 0 1 0 
1 1 1 0 0 

0 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
*/
