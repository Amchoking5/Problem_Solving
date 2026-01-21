#include <stdio.h>

int main(){
	int n,h,w,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&h,&w,&m);
		printf("%d\n",((m-1)%h+1)*100+(m-1)/h+1);
	}
}