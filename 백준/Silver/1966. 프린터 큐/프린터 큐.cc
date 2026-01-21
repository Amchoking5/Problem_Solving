#include <stdio.h>

int main(){
	int k;
	scanf("%d",&k);
	
	for(int i=0;i<k;i++){
		
		int n,m,head,tail,now;
		int values[10]={0};
		int nums[10000];
		int printvalue=9,count=0;
		
		scanf("%d %d",&n,&m);
		for(int j=0;j<n;j++){
			scanf("%d",&nums[j]);
			values[nums[j]]++;
		}
		printvalue=9,count=0;
		head=0,tail=n,now=m;
		while(true){
			if(!values[printvalue]){
				printvalue-=1;
				continue;
			}
			
			if(nums[head]==printvalue){
				if(now==head){
					break;
				}
				head++;
				values[printvalue]--;
				count++;
			}
			else{
				if(head==now){
					now=tail;
				}
				nums[tail]=nums[head];
				head++;
				tail++;
			}
		}
		printf("%d\n",count+1);
	}
}