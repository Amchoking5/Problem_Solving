#include <stdio.h>

int main(){
	int t,a,b,ar[1000000];
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		ar[i]=a+b;
	}
	for(int i=0;i<t;i++){
		printf("Case #%d: %d\n",i+1,ar[i]);
	}
}