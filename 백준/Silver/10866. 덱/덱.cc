#include <stdio.h>
#include <string.h>

int deck[20001]={0};
int head=0,tail=0;

void push_front(int a){
	head--;
	if(head==-1) head=20000;
	deck[head]=a;
}

void push_back(int a){
	deck[tail]=a;
	tail++;
	if(tail==20001) tail=0;
}

void front(){
	if(head==tail) printf("-1\n");
	else printf("%d\n",deck[head]);
}

void back(){
	if(head==tail) printf("-1\n");
	else{
		if(tail==0){
			printf("%d\n",deck[20000]);
		}
		else{
			printf("%d\n",deck[tail-1]);
		}
	}
}

void size(){
	int s=tail-head;
	if(s<0){
		s=s+20001;
	}
	printf("%d\n",s);
}

void pop_front(){
	if(head==tail) printf("-1\n");
	else{
		printf("%d\n",deck[head]);
		head++;
		if(head==20001) head=0;
	}
}

void pop_back(){
	if(head==tail) printf("-1\n");
	else{
		if(tail==0){
			printf("%d\n",deck[20000]);
			tail=20000;
		}
		else{
			printf("%d\n",deck[tail-1]);
			tail--;
		}
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
		if(!strcmp(doit,"push_front")){
			scanf("%d",&num);
			push_front(num);
		}
		else if(!strcmp(doit,"push_back")){
			scanf("%d",&num);
			push_back(num);
		}
		else if(!strcmp(doit,"pop_front")){
			pop_front();
		}
		else if(!strcmp(doit,"pop_back")){
			pop_back();
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