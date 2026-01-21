#include <stdio.h>

int main (){
	int n,a,count=0,check=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		check=0;
		scanf("%d",&a);
		if(a==1)check++;
		for(int j=2;j<a;j++){
			if(a%j==0){
				check++;
				break;
			}
		}
		if(check==0){
			count++;
		}
	}
	printf("%d",count);
}