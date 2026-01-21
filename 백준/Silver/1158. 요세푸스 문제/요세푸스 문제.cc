#include <stdio.h>
#include <queue>

using namespace std;

queue<int> qu;

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++) qu.push(i);
	for(int i=1;i<m;i++){
		int a=qu.front();
		qu.pop();
		qu.push(a);
	}
	
	printf("<%d",qu.front());
	qu.pop();
	
	while(!qu.empty()){
		for(int i=1;i<m;i++){
			int a=qu.front();
			qu.pop();
			qu.push(a);
		}
		printf(", %d",qu.front());
		qu.pop();
	}
	printf(">");
	scanf("%d",&n);
}