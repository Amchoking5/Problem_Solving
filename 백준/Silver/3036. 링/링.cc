#include <stdio.h>

int func(int a, int b)
{
    int c;
    while (b)
    {
        c = a;
        a = b;
        b = c % a;
    }
    return a;
}

int main(){
	int n,first,next,gcd;
	scanf("%d",&n);
	
	scanf("%d",&first);
	for(int i=1;i<n;i++){
		scanf("%d",&next);
		gcd=func(first,next);
		printf("%d/%d\n",first/gcd,next/gcd);
	}
}