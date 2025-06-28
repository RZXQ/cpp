#include<bits/stdc++.h>
using namespace std;
char op[31], ad[31];
char temp[101];
long long num[6];
map<string, long long> m;

bool Check(char ad[]) {
    long long ret = sscanf(ad, "%lld.%lld.%lld.%lld:%lld", &num[1], &num[2], &num[3], &num[4], &num[5]);
    if (ret < 5) {
        //赋值数量小于5，表示格式不合规
        return 0;
    }
    sprintf(temp, "%lld.%lld.%lld.%lld:%lld", num[1], num[2], num[3], num[4], num[5]); //重新组成字符串
    if (strcmp(temp, ad) != 0) //二者不相等表示存在前导0
        return 0;
    for (long long i = 1; i <= 5; i++) {
        //不在合理范围
        if (i < 5 && (num[i] < 0 || num[i] > 255))
            return 0;
        else if (i == 5 && (num[i] < 0 || num[i] > 65535))
            return 0;
    }
    return 1;
}

int main() {
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cin >> op >> ad;
        if (!Check(ad)) {
            //排除地址不合规
            cout << "ERR" << endl;
            continue;
        }
        if (strcmp(op, "Server") == 0) {
            //处理服务机
            if (m.find(ad) != m.end()) //地址ad存在
                cout << "FAIL" << endl;
            else {
                //地址ad不存在
                m[ad] = i;
                cout << "OK" << endl;
            }
        }
        if (strcmp(op, "Client") == 0) {
            //处理客户机
            if (m.find(ad) != m.end()) //地址ad存在
                cout << m.at(ad) << endl;
            else //地址ad不存在
                cout << "FAIL" << endl;
        }
    }


    return 0;
}
