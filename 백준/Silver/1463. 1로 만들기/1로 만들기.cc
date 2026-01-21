#include <stdio.h>

int nums[1000001]={0};

void makevalue(int n,int count){
	
	if(nums[n]!=0 && nums[n]<count) return;
	nums[n]=count;
	
	if(n==1) return;
	if(n%3==0){
		makevalue(n/3,count+1);
	}
	if(n%2==0){
		makevalue(n/2,count+1);
	}
	makevalue(n-1,count+1);
	
}

int main(){
	int n;
	scanf("%d",&n);
	nums[n]=1;
	makevalue(n,1);
	printf("%d",nums[1]-1);
}