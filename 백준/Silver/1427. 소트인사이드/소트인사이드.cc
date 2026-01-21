#include <stdio.h>

int main(){
	int nums[10];
	int n,count=0,e;
	scanf("%d",&n);
	while(n>0){
		nums[count]=n%10;
		n=n/10;
		count++;
	}

	for(int i=0;i<count;i++){
		for(int j=i;j<count;j++){
			if(nums[i]<nums[j]){
				e=nums[i];
				nums[i]=nums[j];
				nums[j]=e;
			}
			
		}
	}
	for(int i=0;i<count;i++){
		printf("%d",nums[i]);
	}
}