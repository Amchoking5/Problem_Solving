#include <stdio.h>

int main(){
	int n,location=0,num=0,sum=0;
	scanf("%d",&n);
	int nums[n]={0};
	
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		if(num==0){
			location--;
			nums[location]=0;
		}
		else{
			nums[location]=num;
			location++;
		}
	}
	for(int i=0;i<location;i++){
		sum+=nums[i];
	}
	printf("%d",sum);
}