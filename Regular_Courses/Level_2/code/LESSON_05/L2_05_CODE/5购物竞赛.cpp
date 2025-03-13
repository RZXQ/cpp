#include<bits/stdc++.h>
using namespace std;

//创建表示商品属性的结构体
struct cmdt {
    int price, num, ave;
} box[110];

//排序规则-单价从大到小排序
bool cmp(cmdt x, cmdt y) {
    return x.ave > y.ave;
}

int main() {
    int n = 0, l = 0, sum = 0;
    cin >> n >> l;
    for (int i = 0; i < n; i++) {
        //输入商品价值及数量
        cin >> box[i].price >> box[i].num;
        //计算商品单价
        box[i].ave = box[i].price / box[i].num;
    }
    //按照单价从大到小排序
    sort(box, box + n, cmp);
    //遍历商品种类
    for (int i = 0; i < n; i++) {
        //当前商品价值全部累加
        if (box[i].num < l) {
            sum += box[i].price;
            l -= box[i].num;
            //当前商品价值部分累加
        } else {
            sum += box[i].ave * l;
            break;
        }
    }
    cout << sum;
    return 0;
}
