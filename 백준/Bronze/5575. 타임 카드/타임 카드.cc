#include <stdio.h>

int main(){
	int a[3][6]={0};
	int b[3][3]={0};
	for(int i=0;i<3;i++){
		for(int j=0;j<6;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			b[i][j]=a[i][j+3]-a[i][j];
		}
	}
	
	
	for(int i=0;i<3;i++){
		for(int j=2;j>=0;j--){
			if(b[i][j]<0){
				b[i][j-1]--;
				b[i][j]+=60;
			}
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
}