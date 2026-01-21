#include <stdio.h>
#include <string.h>

int stack[2000001]={0};
int head=0,tail=0;

void push(int a){
	stack[tail]=a;
	tail++;
}

void front(){
	if(head==tail) printf("-1\n");
	else printf("%d\n",stack[head]);
}

void back(){
	if(head==tail) printf("-1\n");
	else printf("%d\n",stack[tail-1]);
}

void size(){
	printf("%d\n",tail-head);
}

void pop(){
	if(head==tail) printf("-1\n");
	else{
		printf("%d\n",stack[head]);
		head++;
	}
}

void empty(){
	if(head==tail) printf("1\n");
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
		else if(!strcmp(doit,"front")){
			front();
		}
		else{
			back();
		}
	}
}