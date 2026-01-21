#include <stdio.h>
#include <string.h>

int main(){
	char mx[51];
	bool minuswas=false;
	bool lastplus=true;
	scanf("%s",mx);
	int len=strlen(mx);
	int sum=0,now=0;
	
	for(int i=0;i<len;i++){
		if(mx[i]=='-'){
			if(lastplus){
				if(!minuswas){
					sum=sum+now;
				}
				else{
					sum=sum-now;
				}
			}
			else{
				sum=sum-now;
			}
			minuswas=true;
			lastplus=false;
			now=0;
		}
		
		else if(mx[i]=='+'){
			if(lastplus){
				if(!minuswas){
					sum=sum+now;
				}
				else{
					sum=sum-now;
				}
			}
			else{
				sum=sum-now;
			}
			lastplus=true;
			now=0;
		}
		
		else{
			now=now*10;
			now=now+(mx[i]-'0');
		}
	}
	if(lastplus){
		if(!minuswas){
			sum=sum+now;
		}
		else{
			sum=sum-now;
		}
	}
	else{
		sum=sum-now;
	}
	printf("%d",sum);
}