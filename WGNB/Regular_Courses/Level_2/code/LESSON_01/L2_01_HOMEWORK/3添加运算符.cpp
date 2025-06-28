#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    int n;
    cin >> a >> b >> c >> d;
    cin >> n;
    int ans = 0; //方法数
    //符号有4种选择：i=0表示加法；i=1表示减法；i=2表示乘法；i=3表示除法
    for (int i = 0; i <= 3; i++) {
        //枚举第1个符号
        for (int j = 0; j <= 3; j++) {
            //枚举第2个符号
            for (int k = 0; k <= 3; k++) {
                //枚举第3个符号

                int t = 0; //创建t保存枚举的结果

                if (i == 0) t = a + b;
                else if (i == 1) t = a - b;
                else if (i == 2) t = a * b;
                else t = a / b;

                if (j == 0) t = t + c;
                else if (j == 1) t = t - c;
                else if (j == 2) t = t * c;
                else t = t / c;

                if (k == 0) t = t + d;
                else if (k == 1) t = t - d;
                else if (k == 2) t = t * d;
                else t = t / d;

                //判断枚举结果是否等于给定结果
                if (t == n) ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
