#include <stdio.h>
#include <string.h>

//48

int main(){
	int n,len,count=0,check;
	char st[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int alpha[26]={0,};
		check=0;
		scanf("%s",&st);
		len=strlen(st);
		for(int j=0;j<len;j++){
			if(alpha[st[j]-97]==0){
				alpha[st[j]-97]=1;
				check=st[j]-97;
			}
			else if(check==st[j]-97);
			else{
				count++;
				break;
			}
		}
	}
	printf("%d",n-count);
}