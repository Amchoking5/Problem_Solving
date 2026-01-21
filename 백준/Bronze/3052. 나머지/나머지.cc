#include <stdio.h>

int main(){
	int a,arr[42]={0},sum=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a);
		if(arr[a%42]==0) arr[a%42]=1;
	}
	for(int i=0;i<42;i++){
		sum+=arr[i];
	}
	printf("%d",sum);
}