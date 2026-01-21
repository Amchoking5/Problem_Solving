#include <stdio.h>

int main(){
	int x,y,a,b=0,count=0;
	scanf("%d",&a);
	b=a;
	do{
		x=a%10;
		y=a/10;
		a=(10*x)+((x+y)%10);
		count++;
	}while(a!=b);
	printf("%d",count);
	scanf("%d",&a);
}