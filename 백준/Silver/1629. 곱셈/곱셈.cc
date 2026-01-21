#include <stdio.h>

long long int pow(int x,int y,int z){
	if(y==1){
		return x%z;
	}
	if(y%2==0){
		return (pow(x,y/2,z)*pow(x,y/2,z))%z;
	}
	else{
		return (pow(x,y/2,z)*pow(x,1+y/2,z))%z;
	}
}

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%lld",pow(a,b,c));
}