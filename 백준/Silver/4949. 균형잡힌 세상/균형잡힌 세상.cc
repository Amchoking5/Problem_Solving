#include <stdio.h>
#include <string.h>

int main(){
	bool isno=false;
	int len=0,location=0;
	char stack[101];
	
	while(1){
		char st[101];
		stack[101]={0};
		isno=false;
		location=0;
		fgets(st,102,stdin);
		if(!strcmp(st,".\n")) break;
		len=strlen(st);
		for(int i=0;i<len;i++){
			if(st[i]=='('){
				stack[location]='(';
				location++;
			}
			
			else if(st[i]==')'){
				if(location==0){
					isno=true;
					break;
				}
				if(stack[location-1]=='('){
					location--;
					stack[location]=0;
				}
				else{
					isno=true;
					break;
				}
			}
			
			else if(st[i]=='['){
				stack[location]='[';
				location++;
			}
			
			else if(st[i]==']'){
				if(location==0){
					isno=true;
					break;
				}
				if(stack[location-1]=='['){
					location--;
					stack[location]=0;
				}
				else{
					isno=true;
					break;
				}
			}
		}
		if(isno || location>0) printf("no\n");
		else printf("yes\n");
	}
}