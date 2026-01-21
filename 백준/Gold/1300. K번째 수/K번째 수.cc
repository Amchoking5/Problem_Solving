#include <stdio.h>

int main(){
	long long int n,k,count1,count2;
	scanf("%lld %lld",&n,&k);
	long long int left=1,mid,mid2,right=n*n+1;
	
	if(k==1){
		printf("1");
	}
	else{
		while(left<right){
			count1=0,count2=0;
			mid=(left+right)/2;
			mid2=mid-1;
			for(int i=1;i<=n;i++){
				if(mid/i>n){
					count1+=n;
				}
				else{
					count1+=(mid/i);
				}
				
				if(mid2/i>n){
					count2+=n;
				}
				else{
					count2+=(mid2/i);
				}
			}
			if(count1<k){
				left=mid+1;
			}
			else{
				if(count2>=k){
					right=mid;
				}
				else break;
			}
		}
		printf("%lld",mid);
	}
}