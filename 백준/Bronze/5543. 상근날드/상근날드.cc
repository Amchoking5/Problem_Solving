#include <stdio.h>

#define MIN(a,b) (((a)>(b))?(b):(a))

int main(){
    int a;
    int min1=30000,min2=30000;
    for(int i=0;i<3;i++){
        scanf("%d",&a);
        min1=MIN(min1,a);
    }
    for(int i=0;i<2;i++){
        scanf("%d",&a);
        min2=MIN(min2,a);
    }
    printf("%d",min1+min2-50);
}