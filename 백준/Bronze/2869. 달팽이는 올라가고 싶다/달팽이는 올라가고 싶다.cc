#include <stdio.h>

int main(){
	int a,b,v,sum=0;
	scanf("%d %d %d",&a,&b,&v);
	sum=(v-a)/(a-b)+1;
	if((v-a)%(a-b)!=0) sum++;
	printf("%d",sum);
}