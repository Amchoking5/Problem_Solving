#include <stdio.h>

#define MAX(a,b) (((a)<(b))?(b):(a))
#define MIN(a,b) (((a)>(b))?(b):(a))
#define ABS(a) (((a)>0)?(a):((a)*(-1)))

bool people[20]={false,};
int minsum=99999999;
int n;
int score[20][20]={0};
int team1[10]={0};
int team2[10]={0};

int teamsum(){
	int count1=0,count2=0,sum1=0,sum2=0;
	for(int i=0;i<n;i++){
		if(people[i]){
			team1[count1]=i;
			count1++;
		}
		else{
			team2[count2]=i;
			count2++;
		}
	}
	
	for(int i=0;i<count1;i++){
		for(int j=0;j<count1;j++){
			sum1+=score[team1[i]][team1[j]];
		}
	}
	
	for(int i=0;i<count2;i++){
		for(int j=0;j<count2;j++){
			sum2+=score[team2[i]][team2[j]];
		}
	}
	
	return ABS(sum1-sum2);
}

void solve(int k,int lastperson){
	if(k==(n/2)){
		minsum=MIN(teamsum(),minsum);
		return;
	}
	if(lastperson-k+1>(n/2)){
		return;
	}
	for(int i=lastperson+1;i<n;i++){
		if(!people[i]){
			people[i]=true;
			solve(k+1,i);
			people[i]=false;
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&score[i][j]);
		}
	}
	solve(0,-1);
	printf("%d",minsum);
}