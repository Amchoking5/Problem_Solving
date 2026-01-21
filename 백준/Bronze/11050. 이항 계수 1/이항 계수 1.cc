#include <stdio.h>

int facto(int a){
	if(a==0) return 1;
	else return a*facto(a-1);
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d",facto(n)/facto(n-m)/facto(m));
}