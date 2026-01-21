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
	int n,a,b;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		printf("%d\n",a*b/func(a,b));
	}
}