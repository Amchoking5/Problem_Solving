#include <stdio.h>

int main(){
	int n,p,m;
	scanf("%d %d",&n,&p);
	for(int i=0;i<5;i++){
		scanf("%d",&m);
		printf("%d ",m-(n*p));
	}
}