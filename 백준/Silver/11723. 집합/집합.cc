#include <stdio.h>
#include <string.h>

bool setS[21]={false};

int main(){
	int n,num;
	char doit[20];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",doit);
		if(!strcmp(doit,"add")){
			scanf("%d",&num);
			setS[num]=true;
		}
		else if(!strcmp(doit,"remove")){
			scanf("%d",&num);
			setS[num]=false;
		}
		else if(!strcmp(doit,"check")){
			scanf("%d",&num);
			printf("%d\n",setS[num]);
		}
		else if(!strcmp(doit,"toggle")){
			scanf("%d",&num);
			setS[num]=(!setS[num]);
		}
		else if(!strcmp(doit,"all")){
			for(int i=1;i<=20;i++){
				setS[i]=true;
			}
		}
		else{
			for(int i=1;i<=20;i++){
				setS[i]=false;
			}
		}
	}
}