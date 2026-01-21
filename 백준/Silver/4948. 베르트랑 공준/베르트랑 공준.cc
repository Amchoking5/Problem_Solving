#include <stdio.h>
int nums[1000002]={-1,-1,0, };
int main (){
	int a=1,count=0;
	for(int i=2;i<1000001;i++){
		if(nums[i]==-1) continue;
		for(int j=i*2;j<1000001;j=j+i){
			nums[j]=-1;
		}
	}
	while(a){
		scanf("%d",&a);
		count=0;
		if(a==0) break;
		for(int i=a+1;i<a*2+1;i++){
			if(nums[i]==0) count++;
		}
		printf("%d\n",count);
	}
}