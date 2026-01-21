#include <stdio.h>
int max(int a,int b){
    return a > b ? a : b;
}

int arr[501][501],brr[501][501];

int main()
{
    int a,b,c=0,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            b=max(brr[i-1][j-1],brr[i-1][j]);
            brr[i][j]=arr[i][j]+b;
        }
    }
    for(i=1;i<=a;i++){
        if(c<brr[a][i])
        c=brr[a][i];
    }
    printf("%d",c);
    return 0;
}
