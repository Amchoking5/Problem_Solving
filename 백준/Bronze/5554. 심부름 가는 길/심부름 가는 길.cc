#include <stdio.h>

int main(){
	int sum=0,n;
	for(int i=0;i<4;i++){
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("%d\n%d",sum/60,sum%60);
}