#include <stdio.h>
#include <string.h>

int main(){
	int n,i,m,j,len,l;
	char st[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %s",&m,&st);
		len=strlen(st);
		for(j=0;j<len;j++){
			for(l=0;l<m;l++){
				printf("%c",st[j]);
			}
		
		}
		printf("\n");
	}
}