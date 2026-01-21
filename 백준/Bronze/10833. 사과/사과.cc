#include <stdio.h>

int main(){
	int n,a,b,c,d,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		c=(b/a);
		sum+=b-a*c;
	}
	printf("%d",sum);
}