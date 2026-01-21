#include <stdio.h>


int main (){
	int n,check=0,sum=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		sum=0;
		sum+=i;
		int a=i;
		while(a>0){
			sum+=(a%10);
			a=a/10;
		}
		if(sum==n){
			check++;
			printf("%d",i);
			break;
		}
	}
	if(check==0) printf("0");
}