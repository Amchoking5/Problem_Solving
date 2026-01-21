#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int c;
		scanf("%d",&c);
		printf("%d ",c/25);
		c=c%25;
		printf("%d ",c/10);
		c=c%10;
		printf("%d ",c/5);
		c=c%5;
		printf("%d ",c);
	}
	printf("\n");
}