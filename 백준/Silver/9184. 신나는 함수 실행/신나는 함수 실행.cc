#include <stdio.h>

int main(){
	int a,b,c;
	int arr[21][21][21]={0};
	for(int i=0;i<21;i++){
		for(int j=0;j<21;j++){
			arr[0][i][j]=1;
			arr[i][0][j]=1;
			arr[i][j][0]=1;
		}
	}
	
	for(int i=1;i<21;i++){
		for(int j=1;j<21;j++){
			for(int k=1;k<21;k++){
				if(i<j && j<k){
					arr[i][j][k]=arr[i][j][k-1]+arr[i][j-1][k-1]-arr[i][j-1][k];
				}
				else{
					arr[i][j][k]=arr[i-1][j][k]+arr[i-1][j-1][k]+arr[i-1][j][k-1]-arr[i-1][j-1][k-1];
				}
			}
		}
	}
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(a==-1 && b==-1 && c==-1) break;
		if(a<=0 || b<=0 || c<=0) printf("w(%d, %d, %d) = 1\n",a,b,c);
		else if(a>20 || b>20 || c>20) printf("w(%d, %d, %d) = %d\n",a,b,c,arr[20][20][20]);
		else{
			printf("w(%d, %d, %d) = %d\n",a,b,c,arr[a][b][c]);
		}
	}
}