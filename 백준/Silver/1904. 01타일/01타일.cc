#include <stdio.h>

long long int a[1000001]={0,1};
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n+1;i++){
		a[i+2]=(a[i+1]+a[i])%15746;
	}
	printf("%lld",a[n+1]);
}