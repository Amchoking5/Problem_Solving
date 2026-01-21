#include <stdio.h>

#define MIN(a,b) (((a)>(b))?(b):(a))

int main(){
	int n,m,k,min1=10000000,min2=10000000;
	scanf("%d %d %d",&n,&m,&k);
	min1=MIN(m,k);
	min2=MIN(n-m,n-k);
	printf("%d",min1+min2);
}