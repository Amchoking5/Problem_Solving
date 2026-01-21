#include <stdio.h>
#include <string.h>

//48

int main(){
	int len,sum=0;
	char st[20];
	scanf("%s",&st);
	len=strlen(st);
	for(int i=0;i<len;i++){
		if(st[i]==65 || st[i]==66 || st[i]==67) sum+=3;
		else if(st[i]==68 || st[i]==69 || st[i]==70) sum+=4;
		else if(st[i]==71 || st[i]==72 || st[i]==73) sum+=5;
		else if(st[i]==74 || st[i]==75 || st[i]==76) sum+=6;
		else if(st[i]==77 || st[i]==78 || st[i]==79) sum+=7;
		else if(st[i]==80 || st[i]==81 || st[i]==82 || st[i]==83) sum+=8;
		else if(st[i]==84 || st[i]==85 || st[i]==86) sum+=9;
		else if(st[i]==87 || st[i]==88 || st[i]==89 || st[i]==90) sum+=10;
		else sum+=11;
	}
	printf("%d",sum);
}