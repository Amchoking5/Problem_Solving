#include <stdio.h>
int nums[1000002]={-1,-1,0, };
int main (){
	int m,n;
	for(int i=2;i<1000001;i++){
		if(nums[i]==-1) continue;
		for(int j=i*2;j<1000001;j=j+i){
			nums[j]=-1;
		}
	}
	scanf("%d %d",&m,&n);
	for(int i=m;i<n+1;i++){
		if(nums[i]==0) printf("%d\n",i);
	}

}