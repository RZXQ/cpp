#include<bits/stdc++.h>
using namespace std;
int a[100005];
//桶排序
void tong() {
    clock_t start, end;
    start = clock();
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 0; i < 10000; i++) {
        while (a[i] > 0) {
            cout << i << " ";
            a[i]--;
        }
    }
    end = clock();
    double t = (double) (end - start) / CLOCKS_PER_SEC;
    cout << endl;
    cout << "桶排序：" << t << "秒" << endl;
    fclose(stdin);
    fclose(stdout);
}

//选择排序
void select() {
    clock_t start, end;
    start = clock();
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    end = clock();
    double t = (double) (end - start) / CLOCKS_PER_SEC;
    cout << endl;
    cout << "选择排序：" << t << "秒" << endl;
    fclose(stdin);
    fclose(stdout);
}

//冒泡排序
void bubble() {
    clock_t start, end;
    start = clock();
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool f = true;
    for (int i = 0; i < n - 1; i++) {
        f = true;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                f = false;
                swap(a[j], a[j + 1]);
            }
        }
        if (f == true) break;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    end = clock();
    double t = (double) (end - start) / CLOCKS_PER_SEC;
    cout << endl;
    cout << "冒泡排序：" << t << "秒" << endl;
    fclose(stdin);
    fclose(stdout);
}

//插入排序
void insert() {
    clock_t start, end;
    start = clock();
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 2; i <= n; i++) {
        int j = i;
        int t = a[i]; //临时记录需要插入的数字
        while (a[j - 1] > t && j > 1) {
            //找到插入位置
            a[j] = a[j - 1]; //将比t大的数字后移
            j--; //继续向前查看
        }
        a[j] = t; //插入数字
    }
    for (int i = 1; i < n; i++) {
        //输出排序结果
        cout << a[i] << " ";
    }

    end = clock();
    double t = (double) (end - start) / CLOCKS_PER_SEC;
    cout << endl;
    cout << "插入排序：" << t << "秒" << endl;
    fclose(stdin);
    fclose(stdout);
}

int main() {
    //	tong(); //桶排序
    //	select(); //选择排序
    bubble(); //冒泡排序
    //	insert(); //插入排序

    return 0;
}
