#include <stdio.h>

#define MIN(a,b) (((a)<(b))?(a):(b))

int main(){
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	printf("%d",MIN(a+d,b+c));
}