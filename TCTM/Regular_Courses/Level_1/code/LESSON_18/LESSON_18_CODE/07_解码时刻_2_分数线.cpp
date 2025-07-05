#include <bits/stdc++.h>
using namespace std;
//比较函数：降序比较
bool cmp(int a, int b) {
    return a > b;
}

int main() {
    //1、创建数组保存每名学生的成绩
    int score[500] = {};
    //2、接收参加竞赛的人数
    int n;
    cin >> n;
    //3、循环接收学生成绩保存至数组中
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }
    //4、对数组中的成绩进行排序
    sort(score, score + n, cmp);
    //5、计算出获奖分数线
    cout << score[4] << " ";
    //6、记录获奖人数
    int cnt = 0;
    //7、循环判断学生成绩是否超过分数线
    for (int i = 0; i < n; i++) {
        if (score[i] >= score[4]) cnt++;
        else break;
    }
    //8、输出获奖学生人数
    cout << cnt;
    return 0;
}
