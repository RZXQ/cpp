/*
Description
相传在古代印度的 Bramah 庙中，有位僧人整天把三根柱子上的金盘倒来倒去，原来他是想把64个一个比一个小的金盘从一根柱子上移到另一根柱子上去。移动过程中恪守下述规则：每次只允许移动一只盘，且大盘不得落在小盘上面。
有人会觉得这很简单，真的动手移盘就会发现，如以每秒移动一只盘子的话，按照上述规则将64只盘子从一个柱子移至另一个柱子上，所需时间约为5800亿年。
假定这三根柱子的编号分别为A、B、C，现在在柱子A上面放了n个盘子，正好是把这n个盘子从小到大的顺序放着，B和C上先都是空着，现在要将这n个盘子按照上面的规则从A移动到C，请输出具体移动的每个盘子的顺序

Input
输入一个整数 n，1≤n≤8。

Output
输出每次移动的盘子的柱子的编号，例如从A柱上移动一个盘子到C，请输出“A-C”，每次移动输出一行。

Sample Input 1
3

Sample Output 1
A-C
A-B
C-B
A-C
B-A
B-C
A-C
*/
#include <iostream>
using namespace std;

int ans;

// 汉诺塔递归函数
void hanoi(char a, char b, char c, int n) {
    // 如果只有一个盘子，直接从a移动到c
    if (n == 1) {
        cout << a << '-' << c << endl;
        return; // 递归出口: 当只有一个盘子时结束递归
    }
    // 步骤1：将n-1个盘子从a移动到b，借助c作为辅助杆
    hanoi(a, c, b, n - 1); // 将n-1个盘子从a移动到b，c作为中介
    // 步骤2：将第n个盘子从a移动到c
    cout << a << '-' << c << endl; // 输出将最大的盘子从a移到c
    // 步骤3：将n-1个盘子从b移动到c，借助a作为辅助杆
    hanoi(b, a, c, n - 1); // 将n-1个盘子从b移到c，a作为中介
}

int main() {
    int n;
    cin >> n; // 读取盘子数
    hanoi('A', 'B', 'C', n); // 起始柱a，过度柱b，目标柱c，操作n个盘子
    return 0;
}
