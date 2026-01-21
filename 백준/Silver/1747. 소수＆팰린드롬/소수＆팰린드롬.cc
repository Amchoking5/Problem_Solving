#include <stdio.h>
#include <math.h>

bool pcheck(int n){
	if(n==1) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}

bool pelin(int n){
	int numsave=n,count=0,temp;
	int check[10];
	while(numsave){
		check[count]=numsave%10;
		numsave=numsave/10;
		count++;
	}
	for(int i=0;i<count;i++){
		if(check[i]!=check[count-i-1]) return false;
	}
	return true;
}

int main(){
	int n;
	scanf("%d",&n);
	bool ispelin=false;
	bool isp=false;
	n--;
	while(!(ispelin && isp)){
		n++;
		ispelin=pelin(n);
		isp=pcheck(n);
	}
	printf("%d",n);
}