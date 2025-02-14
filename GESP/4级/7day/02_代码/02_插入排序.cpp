#include<bits/stdc++.h>
using namespace std;
const int MAXN = 8005;
int n, q;
//t[i]表示原来的第i个元素在排序后的新位置
int t[MAXN];
struct node {
	int val, id; //val值和原位置
} a[MAXN];
//排序过程保证稳定性
bool cmp(node x, node y) {
	if (x.val != y.val) return x.val < y.val;
	return x.id < y.id;
}
int main() {
	scanf("%d%d", &n, &q);
	for (int i = 1; i <= n; i++) { //读入数组元素
		scanf("%d", &a[i].val);
		a[i].id = i; 
	} 
	sort(a + 1, a + n + 1, cmp); //升序排序	
	//记录排序后每个元素的位置
	for (int i = 1; i <= n; i++){
//		cout << a[i].id << ' ' << a[i].val << endl;
		t[a[i].id] = i; 
	}
//	for(int i = 1; i <= n; i++){
//		cout << i << ' ' << t[i] << endl;
//	}

	//q次操作
	for (int i = 1; i <= q; i++) {
		int opt, x, v;
		scanf("%d", &opt);
		if (opt == 1) { //修改操作
			scanf("%d%d", &x, &v); //ax->v
			a[t[x]].val = v;  
			//向前插入一趟插入排序
			for (int j = t[x]; j >= 2; j--)
				if (cmp(a[j], a[j - 1])) {
					node k = a[j];
					a[j] = a[j - 1];
					a[j - 1] = k;
				}
			//向后一趟插入排序
			for (int j = t[x]; j < n; j++)
				if (cmp(a[j + 1], a[j])) {
					node k = a[j];
					a[j] = a[j + 1];
					a[j + 1] = k;
				}
			//更新位置
			for (int i=1;i<=n;i++)  
				t[a[i].id] = i;
		} else if(opt==2) { //输出原ax的新位置
			scanf("%d", &x);
			printf("%d\n", t[x]);
		}
	}
	return 0;
}

