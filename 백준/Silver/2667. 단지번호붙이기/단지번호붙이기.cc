#include <stdio.h>
#include <algorithm>
using namespace std;
bool compare(int a,int b){
    return a<b;
}
int a,b=2,i,n,j,k,arr[27][27]={0},sum=0,brr[300];
char s[26];
void check(int i,int j){
    arr[i][j]=b;
    if(arr[i-1][j]==1){
        arr[i-1][j]=b;
        check(i-1,j);
    }
    if(arr[i+1][j]==1){
        arr[i+1][j]=b;
        check(i+1,j);
    }
    if(arr[i][j+1]==1){
        arr[i][j+1]=b;
        check(i,j+1);
    }
    if(arr[i][j-1]==1){
        arr[i][j-1]=b;
        check(i,j-1);
    }
}
int main () {
    scanf("%d", &a);

	getchar();
	for (int i = 1; i <= a; i++)
	{
		gets(s);
		for (int j = 1; j <= a; j++)
		{
			arr[i][j] = s[j - 1] - 48;
		}
	}
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            if(arr[i][j]==1){
            check(i,j);
            b++;
            }
        }
    }
    printf("%d\n",b-2);
    for(k=2;k<b;k++){
        for(i=1;i<=a;i++){
            for(j=1;j<=a;j++){
                if(arr[i][j]==k)
                brr[k]++;
            }
        }
    }
    sort(brr+2,brr+b,compare);

    for(i=2;i<b;i++){
    printf("%d\n",brr[i]);
    }
    return 0;
}
