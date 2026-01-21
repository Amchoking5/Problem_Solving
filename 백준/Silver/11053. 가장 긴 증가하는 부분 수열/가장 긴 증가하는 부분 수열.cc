#include <stdio.h>

#define MAX(a,b) (( (a) > (b) ) ? (a) : (b))

int main(){
	int n,maxvalue=-1,maxsum=-1;
	scanf("%d",&n);
	int nums[n+1]={0};
	int counts[n+1]={0};
	
	for(int i=0;i<n;i++){
		scanf("%d",&nums[i+1]);
	}
	
	for(int i=1;i<n+1;i++){
		maxvalue=-1;
		for(int j=0;j<i;j++){
			if(nums[j]<nums[i]){
				if(maxvalue<counts[j]) maxvalue=counts[j];
			}
			counts[i]=maxvalue+1;
		}
	}
	for(int i=1;i<n+1;i++){
		if(maxsum<counts[i]) maxsum=counts[i];
	}
	printf("%d",maxsum);
}