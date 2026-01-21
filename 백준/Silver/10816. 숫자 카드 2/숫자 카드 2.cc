#include <stdio.h>
#include <stdlib.h>

int location=0;
int a[500001]={0};
int b[500001]={0};
int c[20000001]={0};

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
	bool findx=false;
	int n,m,left,right,mid;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	
	qsort(a, n, sizeof(int), compare);
	
	for(int i=0;i<n;i++){
		c[a[i]+10000000]++;
	}
	
	for(int i=0;i<m;i++){
		left=0,right=n-1;
		findx=false;
		
		while(left<=right){
			mid=(left+right)/2;
			if(a[mid]>b[i])
				right = mid-1;
			else if(a[mid]<b[i])
				left=mid+1;
			else if(a[mid]==b[i]){
				findx=true;
				printf("%d ",c[b[i]+10000000]);
				break;
			}
		}
		if(!findx){
			printf("0 ");
		}
	}
}