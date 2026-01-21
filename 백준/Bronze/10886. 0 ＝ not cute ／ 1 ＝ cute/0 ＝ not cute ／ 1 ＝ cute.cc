#include <stdio.h>

int main(){
	int n,a,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		sum+=a;
	}
	if(n>(2*sum)){
		printf("Junhee is not cute!");
	}
	else printf("Junhee is cute!");
}