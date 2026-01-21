#include <stdio.h>

int main(){
	long long int a[100]={0,1};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		a[i+2]=a[i+1]+a[i];
	}
	printf("%lld",a[n]);
}