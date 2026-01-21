#include <stdio.h>

int main(){
	int a,m,n;
	long long int sum=1;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d %d",&m,&n);
		for(int j=m+2;j<m+n+1;j++){
			sum=sum*j;
		}
		for(int j=1;j<n;j++){
			sum=sum/j;
		}
		printf("%lld\n",sum);
		sum=1;
	}
}