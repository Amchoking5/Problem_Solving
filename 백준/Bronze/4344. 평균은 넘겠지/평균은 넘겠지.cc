#include <stdio.h>
#include <string.h>

int main(){
	int t1,t2,arr[1000],sum=0,count=0;
	double avg=0.0;
	scanf("%d",&t1);
	for(int i=0;i<t1;i++){
		scanf("%d",&t2);
		for(int j=0;j<t2;j++){
			scanf("%d",&arr[j]);
			sum+=arr[j];
		}
		avg=(double)sum/t2;
		for(int j=0;j<t2;j++){
			if(avg<arr[j]) count++;
		}
		printf("%0.3lf%c\n",100*count/(double)t2,37);
		sum=0;
		count=0;
		avg=0.0;
	}
}