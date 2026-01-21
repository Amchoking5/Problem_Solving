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
	int n,m;
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<m;i++){
		int check,s1,s2;
		scanf("%d %d %d",&check,&s1,&s2);
		s1++;
		s2++;
		if(check){
			int boss1 = find(s1);
			int boss2 = find(s2);
			if(boss1==boss2) printf("YES\n");
			else printf("NO\n");
		}
		else{
			setgroup(s1,s2);
		}
	}
}