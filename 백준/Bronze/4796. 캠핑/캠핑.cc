#include <stdio.h>

#define MIN(a,b) (((a)>(b))?(b):(a))

int main(){
	int l,p,v,count=1;
	scanf("%d %d %d",&l,&p,&v);
	while(l+p+v){
		int sum=0;
		sum+=l*(v/p);
		sum+=MIN(l,v%p);
		printf("Case %d: %d\n",count++,sum);
		scanf("%d %d %d",&l,&p,&v);
	}
}