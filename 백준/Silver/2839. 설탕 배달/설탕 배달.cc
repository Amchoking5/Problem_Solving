#include <stdio.h>

int main(){
	int n,sum=0;
	scanf("%d",&n);
	if(n==2 || n==4 || n==7){
		printf("-1");
		return 0;
	}
	while(n%5){
		sum++;
		n=n-3;
	}
	sum=sum+(n/5);
	printf("%d",sum);
}