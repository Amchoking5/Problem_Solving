#include <stdio.h>

#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))

int nums[11]={0};
int n;
long long int maxsum=-1000000000;
long long int minsum=1000000000;

void solve(int k,int pl,int mi,int mu,int de,long long int sum){
	if(k==n){
		maxsum=MAX(maxsum,sum);
		minsum=MIN(minsum,sum);
		return;
	}
	if(pl>0){
		solve(k+1,pl-1,mi,mu,de,sum+nums[k]);
	}
	if(mi>0){
		solve(k+1,pl,mi-1,mu,de,sum-nums[k]);
	}
	if(mu>0){
		solve(k+1,pl,mi,mu-1,de,sum*nums[k]);
	}
	if(de>0){
		solve(k+1,pl,mi,mu,de-1,sum/nums[k]);
	}
}

int main(){
	long long int first;
	int pl,mi,mu,de;
	scanf("%d",&n);
	scanf("%lld",&first);
	for(int i=1;i<n;i++){
		scanf("%d",&nums[i]);
	}
	scanf("%d %d %d %d",&pl,&mi,&mu,&de);
	solve(1,pl,mi,mu,de,first);
	
	printf("%lld\n",maxsum);
	printf("%lld\n",minsum);
}