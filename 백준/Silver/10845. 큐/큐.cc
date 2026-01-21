#include <stdio.h>
#include <vector>
#include <queue>
#include <string.h>

using namespace std;

queue<int> q;

int main(){
	int n,num=0;
	char doit[20];
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",doit);
		if(!strcmp(doit,"push")){
			scanf("%d",&num);
			q.push(num);
		}
		else if(!strcmp(doit,"pop")){
			if(q.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n",q.front());
				q.pop();
			}
		}
		else if(!strcmp(doit,"size")){
			printf("%d\n",q.size());
		}
		else if(!strcmp(doit,"empty")){
			printf("%d\n",q.empty());
		}
		else if(!strcmp(doit,"front")){
			if(q.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n",q.front());
			}
		}
		else{
			if(q.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n",q.back());
			}
		}
	}
	
}