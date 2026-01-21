#include <stdio.h>
#include <string.h>

//32

int main(){
	int len,count1=0,count2=0,check1=0,check2=0;
	char st[1000000];
	scanf("%[^\n]s",&st);
	len=strlen(st);
	for(int i=0;i<len;i++){
		if(len==1 && st[i]==32){
			printf("0");
			check2=1;
			break;
		}
		if(st[i]!=32){
			check1=1;
			count2=0;
		}
		else if(check1==1 && st[i]==32){
			count1++;
			count2++;
		}	
	}
	if(check2==0) printf("%d",count1-count2+1);
}