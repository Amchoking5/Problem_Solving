#include <stdio.h>

int deck[200000];
int head=100000,tail=100000;

//deck[head]에 값이 있음 deck[tail]에 값이 없음 

int main(){
	int n,m,count=0;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		deck[tail]=i;
		tail++;
	}
	for(int i=0;i<m;i++){
		int num,cnt=1;
		bool closehead;
		scanf("%d",&num);
		if(deck[head]==num){
			head++;
			continue;
		}
		while(true){
			if(deck[head+cnt]==num){
				closehead=true;
				break;
			}
			else if(deck[tail-cnt]==num){
				closehead=false;
				break;
			}
			cnt++;
		}
		for(int j=0;j<cnt;j++){
			if(closehead){
				deck[tail]=deck[head];
				tail++;
				head++;
				count++;
			}
			else{
				tail--;
				head--;
				deck[head]=deck[tail];
				count++;
			}
		}
		head++;
	}
	printf("%d",count);
}