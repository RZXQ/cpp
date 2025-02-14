#include <bits/stdc++.h>
using namespace std;
// 一位十六进制字符转换为数字
int trans(char a) {
	if (a<='9')
		return (a-'0');
	return (a-'A'+10);
}
// 一位十六进制数字转换为字符
char itrans(int n) {
	if (n>=10)
		return (char)(n-10+'A');
	return (char)(n+'0');
}
int image[25][25];
int cpimg[25][25];
int his[256];
int color[16];
// 计算整数c的压缩值	
int compress(int c){
	int min=255,min_i=0;
	for(int h=0;h<16;h++){
		int k=abs(c-color[h]);
		if(k<min){
			min=k;
			min_i=h; //下标为转换值
		}
	}
	return min_i;
}
int main(){
	int n;
	cin>>n;
	char line[50]={0};
	for(int i=0;i<n;i++){
		cin>>line;
		for(int j=0;j<strlen(line);j+=2){
			int c = trans(line[j])*16+trans(line[j+1]);
			image[i][j/2]=c;
			his[c]++;// 统计灰阶值出现的次数	
		}
	}
	// 在his数组中找出最多的前16种灰阶值保存在数组color中
	for(int i=0;i<16;i++){
		int max=0;
		for(int j=0;j<256;j++){
			if(his[max]<his[j]){
				max=j;
			}
		}
		color[i]=max;
		his[max]=-1;// 标记为-1，该灰阶值已获取
	}
	// 对image数组中的元素进行压缩处理
	int m=strlen(line)/2;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cpimg[i][j]=compress(image[i][j]);
		}	
	}	
	// 输出选取的16个灰阶
	for (int i=0;i<16;i++)
		cout<<itrans(color[i]/16)<<itrans(color[i]%16);
	cout<<endl;
	// 输出压缩后的图像
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++)
			cout<<itrans(cpimg[i][j]);
		cout<<endl;
	}	
	return 0;
}
