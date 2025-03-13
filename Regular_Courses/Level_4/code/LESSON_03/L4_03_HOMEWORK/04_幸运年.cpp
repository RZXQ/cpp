#include<bits/stdc++.h>
using namespace std;
//a数组标记，b数组存储质数，num质数数量
bool a[2000010];
int b[200000], num;
//欧拉筛
void prime(int n) {
    for (int i = 2; i <= n; i++) {
        //保存质数
        if (a[i] == 0) {
            b[num++] = i;
        }
        //遍历现有质数
        for (int j = 0; j < num; j++) {
            //合数超过最大范围
            if (i * b[j] > n) break;
            //标记合数
            a[i * b[j]] = 1;
            //后续质数不是合数的最小质因子
            if (i % b[j] == 0) break;
        }
    }
    return;
}

int main() {
    clock_t start = clock();
    prime(2000000);
    int n;
    n = 1000;
    //需要处理多组数据
    //while (cin>>n)
    cout << b[n - 1] << " " << b[n] - b[n - 1] << endl;
    clock_t end = clock();
    double time_used = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    //  /CLOCKS_PER_SEC将结果转为以秒为单位
    cout << "time used: " << time_used << " s\n";
    return 0;
}
