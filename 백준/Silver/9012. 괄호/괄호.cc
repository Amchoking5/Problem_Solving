#include <stdio.h>
#include <string.h>

int main(){
	int n,len=0,count,check;
	char st[50];
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		count=0;
		check=0;
		scanf("%s",st);
		len=strlen(st);
		
		for(int j=0;j<len;j++){
			if(st[j]=='('){
				count++;
			}
			else{
				if(count==0){
					check=1;
					break;
				}
				else{
					count--;
				}
			}
		}
		if(count!=0 || check==1){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
		
	}
}