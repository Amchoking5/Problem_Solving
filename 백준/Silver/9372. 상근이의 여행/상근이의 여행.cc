#include <stdio.h>

int main(){
	int testcase;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		int n,m,a,b;
		scanf("%d %d",&n,&m);
		for(int j=0;j<m;j++){
			scanf("%d %d",&a,&b);
		}
		printf("%d\n",n-1);
	}
}