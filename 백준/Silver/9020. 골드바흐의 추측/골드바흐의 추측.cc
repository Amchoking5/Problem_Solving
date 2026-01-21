#include <stdio.h>
int nums[1000002]={-1,-1,0, };
int main (){
	int n1,a,n,m;
	for(int i=2;i<1000001;i++){
		if(nums[i]==-1) continue;
		for(int j=i*2;j<1000001;j=j+i){
			nums[j]=-1;
		}
	}
	scanf("%d",&n1);
	for(int i=0;i<n1;i++){
		scanf("%d",&a);
		for(int j=2;j<a;j++){
			if(a-j<j) break;
			if(nums[j]==0 && nums[a-j]==0){
				m=j;
				n=a-j;
			}
		}
		printf("%d %d\n",m,n);
	}
}