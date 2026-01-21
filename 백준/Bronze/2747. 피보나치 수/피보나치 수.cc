#include <stdio.h>

int main(){
    long long int a[50]={0,1};
    for(int i=0;i<46;i++){
        a[i+2]=a[i]+a[i+1];
    }
    int n;
    scanf("%d",&n);
    printf("%lld",a[n]);
}