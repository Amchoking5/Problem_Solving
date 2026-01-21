#include <stdio.h>

int n;
int maxvalues[1001]={0};

void putit(int d,int w){
	int temp;
	for(int i=d;i>0;i--){
		if(maxvalues[i]<w){
			temp=maxvalues[i];
			maxvalues[i]=w;
			if(temp!=0){
				putit(i-1,temp);
			}
			break;
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int d,w;
		scanf("%d %d",&d,&w);
		putit(d,w);
	}
	int sum=0;
	for(int i=0;i<=1000;i++){
		sum+=maxvalues[i];
	}
	printf("%d",sum);
}