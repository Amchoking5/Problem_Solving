#include <stdio.h>

#define MAX(a,b) (((a)<(b)) ? (b) : (a))

int main(){
	int n,maxvalue=-10000;
	scanf("%d",&n);
	int nums[n+1]={0};
	int count[n+1]={0};
	for(int i=1;i<n+1;i++){
		scanf("%d",&nums[i]);
		if(count[i-1]+nums[i]>nums[i]){
			count[i]=count[i-1]+nums[i];
		}
		else{
			count[i]=nums[i];
		}
		maxvalue=MAX(maxvalue,count[i]);
	}
	printf("%d",maxvalue);
}