#include <stdio.h>

int main(){
	int n,a,sum=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		sum+=a;
		sum--;
	}
	printf("%d",sum);
}