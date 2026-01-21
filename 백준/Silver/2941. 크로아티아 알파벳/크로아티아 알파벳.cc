#include <stdio.h>
#include <string.h>

//48

int main(){
	int len,sum=0;
	char st[100];
	scanf("%s",&st);
	len=strlen(st);
	for(int i=0;i<len;i++){
		if(i<len-2){
			if((st[i]==100) && (st[i+1]==122) && (st[i+2]==61)) sum+=1;
		}
		if(i<len-1){
			if((st[i]==99) && (st[i+1]==61)) sum+=1;
			if((st[i]==99) && (st[i+1]==45)) sum+=1;
			if((st[i]==100) && (st[i+1]==45)) sum+=1;
			if((st[i]==108) && (st[i+1]==106)) sum+=1;
			if((st[i]==110) && (st[i+1]==106)) sum+=1;
			if((st[i]==115) && (st[i+1]==61)) sum+=1;
			if((st[i]==122) && (st[i+1]==61)) sum+=1;
		}
	}
	printf("%d",len-sum);
}