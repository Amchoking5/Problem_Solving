#include <stdio.h>

int main(){
	long long int n,min,sum=0;
	scanf("%lld",&n);
	long long int dis[n]={0};
	long long int cost[n]={0};
	
	for(int i=0;i<n-1;i++){
		scanf("%lld",&dis[i]);
	}
	
	for(int i=0;i<n;i++){
		scanf("%lld",&cost[i]);
		
		if(i==0){
			min=cost[i];
		}
		else{
			sum+=dis[i-1]*min;
		}
		
		if(min>cost[i]){
			min=cost[i];
		}
	}
	printf("%lld",sum);
}