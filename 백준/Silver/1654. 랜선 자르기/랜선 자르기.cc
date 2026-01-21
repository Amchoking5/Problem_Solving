#include <stdio.h>

#define MAX(a,b) (((a)>(b))?(a):(b))

int main(){
	int n,m;
	long long int count1=0,count2=0;
	scanf("%d %d",&n,&m);
	long long int lans[n]={0};
	long long int mid,left=1,right=0;
	
	for(int i=0;i<n;i++){
		scanf("%d",&lans[i]);
		right=MAX(right,lans[i]);
	}
	
	while(1){
		count1=0;
		count2=0;
		mid=(left+right)/2;
		for(int i=0;i<n;i++){
			count1+=(lans[i]/mid);
			count2+=(lans[i]/(mid+1));
		}
		if(m>count1){
			right=mid;
		}
		else{
			if(count2>=m){
				left=mid+1;
			}
			else{
				break;
			}
		}
	}
	printf("%lld",mid);
}