#include <stdio.h>

void hanoi(int first,int last, int n){
	int check;
	if(n==1) {
		printf("%d %d\n",first,last);
		return;
	}
	if(first==1 && last==2) check=3;
	else if(first==1 && last==3) check=2;
	else if(first==2 && last==1) check=3;
	else if(first==2 && last==3) check=1;
	else if(first==3 && last==1) check=2;
	else if(first==3 && last==2) check=1;
	hanoi(first,check,n-1);
	printf("%d %d\n",first,last);
	hanoi(check,last,n-1);
}

int main (){
	int result=1,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) result *= 2;
	printf("%d\n",result-1);
	hanoi(1,3,n);
}