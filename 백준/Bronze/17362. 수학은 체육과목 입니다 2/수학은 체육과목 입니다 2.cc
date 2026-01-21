#include <stdio.h>

int main(){
    long long int a;
    int b;
    scanf("%lld",&a);
    b=a%8;
    if(b==1) printf("1");
    else if(b==2 || b==0) printf("2");
    else if(b==3 || b==7) printf("3");
    else if(b==4 || b==6) printf("4");
    else printf("5");
}