#include <stdio.h>


int n,m;

void npr(int k,int check[9],int arr[9]){
	if(m==k){
		for(int i=1;i<k+1;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
		return;
	}
	for(int i=arr[k]+1;i<n+1;i++){
		if(check[i]==0){
			check[i]=1;
			arr[k+1]=i;
			npr(k+1,check,arr);
			check[i]=0;
		}
	}
	return;
	
}

int main(){
	int check[9]={0};
	int arr[9]={0};
	scanf("%d %d",&n,&m);
	npr(0,check,arr);
}