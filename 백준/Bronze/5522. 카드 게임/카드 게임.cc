#include <stdio.h>

int n;
int sum=0;

int main(){
	while(scanf("%d",&n) != EOF){
		sum=sum+n;
	}
	printf("%d",sum);
	scanf("%d",&n);
}