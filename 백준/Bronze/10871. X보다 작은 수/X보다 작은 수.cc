#include <stdio.h>

int main(){
	int t,x,a;
	scanf("%d %d",&t,&x);
	for(int i=0;i<t;i++){
		scanf("%d",&a);
		if(a<x) printf("%d ",a);
	}
}