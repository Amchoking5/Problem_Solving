#include <stdio.h>

int count[10001]={0};

int main(){
	int n,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		count[a]++;
	}
	
	for(int i=0;i<10001;i++){
		if(count[i]==0) continue;
		for(int j=0;j<count[i];j++){
			printf("%d\n",i);
		}
	}
}