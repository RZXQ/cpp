#include <bits/stdc++.h>
using namespace std;
struct person {
	char name[9];
	int age;
};
int main(){
	person a[10]={
		"John", 17,
		"Paul", 19,
		"Mary", 18,
		"adam", 16
	}; 
	printf ("%c\n",a[2].name[0]);
	
	return 0;
}
