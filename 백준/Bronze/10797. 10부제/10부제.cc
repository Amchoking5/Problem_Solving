#include <stdio.h>

int main(){
	int a,b,sum=0;
	scanf("%d",&a);
	a=a%10;
	for(int i=0;i<5;i++){
		scanf("%d",&b);
		if(b==a) sum++;
	}
	printf("%d",sum);
}