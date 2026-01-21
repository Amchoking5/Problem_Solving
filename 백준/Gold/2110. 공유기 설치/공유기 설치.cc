#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) (((a)>(b))?(a):(b))

int compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(){
	int n,m;
	long long int count1=0,count2=0,check1=0,check2=0;
	scanf("%d %d",&n,&m);
	long long int lans[n]={0};
	long long int mid,left=0,right=0;
	
	for(int i=0;i<n;i++){
		scanf("%d",&lans[i]);
	}
	
	qsort(lans, n, sizeof(long long int), compare);
	right=lans[n-1]*2;
	
	while(1){
		count1=1;
		count2=1;
		check1=lans[0];
		check2=lans[0];
		mid=(left+right)/2;
		
		for(int i=0;i<n;i++){
			if(check1+mid<=lans[i]){
				count1++;
				check1=lans[i];
			}
			if(check2+(mid+1)<=lans[i]){
				count2++;
				check2=lans[i];
			}
		}
		if(m>count1){
			right=mid;
		}
		else{
			if(count2>=m){
				left=mid+1;
			}
			else{
				break;
			}
		}
		if(left>=right){
			break;
		}
	}
	printf("%lld",mid);
}