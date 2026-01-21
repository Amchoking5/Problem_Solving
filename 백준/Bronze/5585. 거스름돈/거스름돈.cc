#include <stdio.h>

int money[6]={500,100,50,10,5,1};

int main(){
	int n,sum=0;
	scanf("%d",&n);
	int left=1000-n;
	for(int i=0;i<6;i++){
		sum+=left/money[i];
		left=left%money[i];
	}
	printf("%d",sum);
}