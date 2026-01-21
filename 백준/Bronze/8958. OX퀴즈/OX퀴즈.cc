#include <stdio.h>
#include <string.h>

int main(){
	int t,len,sum=0,point=0;
	char st[80];
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%s",&st);
		len=strlen(st);
		for(int j=0;j<len;j++){
			if(st[j]=='O'){
				point++;
				sum+=point;
			}
			else point=0;
		}
		printf("%d\n",sum);
		point=0;
		sum=0;
	}
}