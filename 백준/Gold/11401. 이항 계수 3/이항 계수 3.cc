#include <stdio.h>

#define devide 1000000007

long long int facto(int x,int y){
	if (x==0) return 1;
	return (x*facto(x-1,y))%y;
}

long long int power(long long int n, int k){
    // 기저 사례: n^0 = 1
    if(k == 0) return 1;
 
    long long int temp = power(n, k/2);
    long long int result = temp * temp % devide;
    // 홀수이면 n을 한 번 더 곱해준다.
    if(k%2) result =result * n % devide;
    return result;
}

int main(){
	int a,b;
	long long int c,d,e;
	scanf("%d %d",&a,&b);
	c=facto(a,devide);
	d=(facto(b,devide)*facto(a-b,devide))%devide;
	e=(c*power(d,devide-2))%devide;
	printf("%lld",e);
}