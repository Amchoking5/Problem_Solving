#include <stdio.h>
int main(){
    int a,b,c=0,i,arr[100]={0};
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(i=0;i<a;i++){
        if(b==arr[i]){
            c++;
        }
    }
    printf("%d",c);
}