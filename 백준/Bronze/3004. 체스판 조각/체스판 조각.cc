#include <stdio.h>

int main(){
    int n,x,y;
    scanf("%d",&n);
    x=n/2+1;
    y=x+(n%2);
    printf("%d",x*y);
}