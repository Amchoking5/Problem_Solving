#include <stdio.h>

#define ABS(a) (((a)>0)?(a):((-1)*(a)))

int main(){
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",ABS(a-b));
}