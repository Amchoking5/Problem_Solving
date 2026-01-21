#include <stdio.h>

#define MAX(a,b) (((a)>(b))?(a):(b))

int main(){
    int l,a,b,c,d;
    int n,m;
    scanf("%d",&l);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    n=(a-1)/c+1;
    m=(b-1)/d+1;
    printf("%d",l-MAX(n,m));
}