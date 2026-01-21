#include <stdio.h>

int main(){
	int n,a;
	scanf("%d",&n);
	for(int i=0;i<9;i++){
		scanf("%d",&a);
		n-=a;
	}
	printf("%d",n);
}