#include <stdio.h>

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))

int arr[100001];
int len=1;
long long int maxvalue=0;

void findmax(int start,int end){
	if(start>end) return;
	if(start==end){
		maxvalue=MAX(maxvalue,arr[start]);
		return;
	}
	
	int i=(start+end)/2;
	int j=i+1;
	long long int minvalue;
	if(arr[i]>arr[j]) minvalue=arr[j];
	else minvalue=arr[i];
	
	maxvalue=MAX(maxvalue,minvalue*2);
	
	while(!(i==start && j==end)){
		if(i==start){
			j++;
			minvalue=MIN(minvalue,arr[j]);
		}
		else if(j==end){
			i--;
			minvalue=MIN(minvalue,arr[i]);
		}
		else if(arr[i-1]>arr[j+1]){
			i--;
			minvalue=MIN(minvalue,arr[i]);
		}
		else if(arr[i-1]<=arr[j+1]){
			j++;
			minvalue=MIN(minvalue,arr[j]);
		}
		
		maxvalue=MAX(maxvalue,minvalue*(j-i+1));
		
	}
	
	findmax(start,(start+end)/2);
	findmax((start+end)/2+1,end);
}

int main(){
	while(1){
		maxvalue=0;
		scanf("%d",&len);
		if(!len) return 0;
		
		for(int i=0;i<len;i++){
			scanf("%d",&arr[i]);
		}
		
		findmax(0,len-1);
		printf("%lld\n",maxvalue);
	}
}