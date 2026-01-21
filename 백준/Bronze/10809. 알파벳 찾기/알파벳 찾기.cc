#include <stdio.h>
#include <string.h>

int main(){
	char st[100],len;
	int alpha[26];
	for(int i=0;i<26;i++) alpha[i]=-1;
	scanf("%s",&st);
	len=strlen(st);
	for(int i =0;i<len;i++){
		if(alpha[st[i]-97]==-1) alpha[st[i]-97]=i;
	}
	for(int i=0;i<26;i++){
		printf("%d ",alpha[i]);
	}
}