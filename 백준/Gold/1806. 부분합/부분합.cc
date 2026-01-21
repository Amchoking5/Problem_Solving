#include <stdio.h>

#define MIN(a,b) (((a)>(b))?(b):(a))

int main(){
	int n,m,sum,minvalue=100001;
	scanf("%d %d",&n,&m);
	int arr[n];
	int i=0,j=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sum=arr[0];
	while(j<n){
		if(sum==m){
			minvalue=MIN(minvalue,j-i+1);
			j++;
			if(j>=n){
				break;
			}
			sum=sum+arr[j];
		}
		else if(sum>m){
			minvalue=MIN(minvalue,j-i+1);
			sum=sum-arr[i];
			i++;
		}
		else{
			j++;
			if(j>=n){
				break;
			}
			sum=sum+arr[j];
		}
	}
	if(minvalue==100001) printf("0");
	else printf("%d",minvalue);
}