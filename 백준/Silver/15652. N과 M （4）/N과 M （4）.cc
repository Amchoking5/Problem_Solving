#include <stdio.h>

#define MAX(a,b) (((a)>(b)) ? (a) : (b))

int n,m;

void npr(int k,int arr[9]){
	if(m==k){
		for(int i=1;i<k+1;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
		return;
	}
	for(int i=MAX(1,arr[k]);i<n+1;i++){
		arr[k+1]=i;
		npr(k+1,arr);
	}
	return;
	
}

int main(){
	int arr[9]={0};
	scanf("%d %d",&n,&m);
	npr(0,arr);
}