#include <stdio.h>

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define ABS(a) (((a)>0)?(a):((-1)*a))

int main(){
	int sum=0,a,min=10000,max=0;
	for(int i=0;i<4;i++){
		scanf("%d",&a);
		sum+=a;
		max=MAX(max,a);
		min=MIN(min,a);
	}
	int ans=(2*(max+min))-sum;
	printf("%d",ABS(ans));;
	
}