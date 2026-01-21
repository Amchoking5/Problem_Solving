#include <stdio.h>

int main (){
	int m,n,first=-1,sum=0,check=0;
	scanf("%d %d",&m,&n);
	for(int i=m;i<n+1;i++){
		check=0;
		if(i==1) check++;
		for(int j=2;j<i;j++){
			if(i%j==0){
				check++;
				break;
			}
		}
		if(check==0){
			if(first==-1){
				first=i;
			}
			sum+=i;
		}
	}
	if(sum!=0){
		printf("%d\n%d",sum,first);
	}
	else{
		printf("-1");
	}
}