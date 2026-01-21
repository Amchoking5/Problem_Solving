#include <stdio.h>
#include <string.h>

int stack[10001]={0};
int location=0;

void push(int a){
	stack[location]=a;
	location++;
}

void top(){
	if(!location) printf("-1\n");
	else printf("%d\n",stack[location-1]);
}

void size(){
	printf("%d\n",location);
}

void pop(){
	if(!location) printf("-1\n");
	else{
		printf("%d\n",stack[location-1]);
		stack[location-1]=0;
		location--;
	}
}

void empty(){
	if(!location) printf("1\n");
	else printf("0\n");
}


int main(){
	int n,num=0;
	char doit[20];
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",doit);
		if(!strcmp(doit,"push")){
			scanf("%d",&num);
			push(num);
		}
		else if(!strcmp(doit,"pop")){
			pop();
		}
		else if(!strcmp(doit,"size")){
			size();
		}
		else if(!strcmp(doit,"empty")){
			empty();
		}
		else{
			top();
		}
	}
}