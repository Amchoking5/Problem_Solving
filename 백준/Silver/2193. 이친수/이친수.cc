#include <stdio.h>
long long int f[9999]={0,1,1};
long long int fibo(int n)
{
	if(f[n]!=0){
		return f[n];
	}
	else{
		f[n]=fibo(n-1)+fibo(n-2);
		return f[n];
	}
}
int main(){
	int a;
	scanf("%d",&a);
	printf("%lld\n",fibo(a));
}