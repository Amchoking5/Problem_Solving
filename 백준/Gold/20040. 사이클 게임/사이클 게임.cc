#include <stdio.h>

int parent[1000005]={0};

int find(int x){
	if(parent[x]==0) return x;
	int let = find(parent[x]);
	parent[x]=let;
	return let;
}

void setgroup(int set1,int set2){
	int boss1=find(set1);
	int boss2=find(set2);
	if(boss1==boss2) return;
	parent[boss1]=boss2;
}

int main(){
	int n,m,round=-1;
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<m;i++){
		int s1,s2;
		scanf("%d %d",&s1,&s2);
		s1++;
		s2++;
		int boss1 = find(s1);
		int boss2 = find(s2);
		if(boss1==boss2){
			round=i+1;
			break;
		}
		else{
			setgroup(s1,s2);
		}
			
	}
	if(round==-1) printf("0");
	else printf("%d",round);
}