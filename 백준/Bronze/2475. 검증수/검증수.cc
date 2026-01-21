#include <stdio.h>

int sum=0;

int main(){
	for(int i=0;i<5;i++){
		int a;
		scanf("%d",&a);
		sum+=(a*a);
	}
	printf("%d",sum%10);
}