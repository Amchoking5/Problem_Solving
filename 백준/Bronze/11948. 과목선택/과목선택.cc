#include <stdio.h>

#define MIN(a,b) (((a)<(b))?(a):(b))

int main(){
	int a,min1=101,min2=101,sum=0;
	for(int i=0;i<4;i++){
		scanf("%d",&a);
		sum+=a;
		min1=MIN(min1,a);
	}
	for(int i=0;i<2;i++){
		scanf("%d",&a);
		sum+=a;
		min2=MIN(min2,a);
	}
	printf("%d",sum-min1-min2);
}