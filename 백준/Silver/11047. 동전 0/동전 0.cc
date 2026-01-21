#include <stdio.h>

int main(){
	int n,k,sum=0;
	scanf("%d %d",&n,&k);
	int coin[n]={0};
	
	for(int i=0;i<n;i++){
		scanf("%d",&coin[i]);
	}
	
	for(int i=n-1;i>=0;i--){
		sum+=(k/coin[i]);
		k=k%coin[i];
	}
	
	printf("%d",sum);
}