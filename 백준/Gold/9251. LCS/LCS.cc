#include <stdio.h>
#include <string.h>


#define MAX(a,b) (((a)<(b)) ? (b) : (a))
int count[1001][1001]={0};

int main(){
	char first[1001],second[1001];
	scanf("%s",first);
	scanf("%s",second);
	
	for(int i=1;i<strlen(first)+1;i++){
		for(int j=1;j<strlen(second)+1;j++){
			if(first[i-1]==second[j-1]){
				count[i][j]=count[i-1][j-1]+1;
			}
			else{
				count[i][j]=MAX(count[i-1][j],count[i][j-1]);
			}
		}
	}
	
	printf("%d",count[strlen(first)][strlen(second)]);
}