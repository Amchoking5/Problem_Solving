#include <stdio.h>

int main(){
	int n,a[1000]={0},e;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[i]>a[j]){
				e=a[i];
				a[i]=a[j];
				a[j]=e;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}