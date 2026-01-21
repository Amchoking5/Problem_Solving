#include <stdio.h>

int q[1000001];
int head=0,tail=0;

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		q[tail]=tail+1;
		tail++;
	}
	printf("<");
	while(tail-head!=1){
		for(int i=0;i<m-1;i++){
			q[tail]=q[head];
			tail++;
			head++;
		}
		printf("%d, ",q[head]);
		head++;
	}
	printf("%d>",q[head]);
}