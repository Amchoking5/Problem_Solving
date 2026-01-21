#include <stdio.h>

int main(){
	int n,maxscore,sum=0;
	int score[101];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&score[i]);
	}
	maxscore=score[n-1];
	for(int i=n-2;i>=0;i--){
		if(score[i]<=maxscore-1){
			maxscore=score[i];
		}
		else{
			sum+=(score[i]-maxscore+1);
			maxscore=maxscore-1;
		}
	}
	printf("%d",sum);
}