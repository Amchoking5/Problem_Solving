#include <stdio.h>

bool arrA[51][51];
bool arrB[51][51];

int main(){
	int n,m,count=0;
	scanf("%d %d",&n,&m);
	char strscan[51];
	for(int i=0;i<n;i++){
		scanf("%s",strscan);
		for(int j=0;j<m;j++){
			arrA[i][j]=strscan[j]-'0';
		}
	}
	for(int i=0;i<n;i++){
		scanf("%s",strscan);
		for(int j=0;j<m;j++){
			arrB[i][j]=strscan[j]-'0';
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arrA[i][j]!=arrB[i][j]){
				count++;
				if(i+3<=n && j+3<=m){
					for(int k=i;k<i+3;k++){
						for(int l=j;l<j+3;l++){
							arrA[k][l]=(!arrA[k][l]);
						}
					}	
				}
				else{
					count=-1;
					break;
				}
			}
		}
		if(count==-1){
			break;
		}
	}
	printf("%d",count);
}