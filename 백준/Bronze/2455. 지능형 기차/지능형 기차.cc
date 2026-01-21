#include <stdio.h>

#define MAX(a,b) (((a)>(b))?(a):(b))

int main(){
    int maxp=0;
    int a,b,sum=0;
    for(int i=0;i<4;i++){
        scanf("%d %d",&a,&b);
        sum=(sum+b-a);
        maxp=MAX(maxp,sum);
    }
    printf("%d",maxp);
}