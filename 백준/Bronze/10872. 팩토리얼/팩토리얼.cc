#include <stdio.h>

int facto(int a){
	if (a==1 || a==0) return 1;
	return a*facto(a-1);
}

int main (){
	int a;
	scanf("%d",&a);
	printf("%d",facto(a));
}