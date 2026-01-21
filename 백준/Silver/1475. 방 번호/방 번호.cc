#include <stdio.h>
#include <queue>

#define MAX(a,b) (((a)>(b))?(a):(b))

using namespace std;

int main(){
	int n,max=0;
	int count[10]={0};
	scanf("%d",&n);
	while(n!=0){
		count[n%10]++;
		n=n/10;
	}
	for(int i=0;i<9;i++){
		if(i==6){
			max=MAX(max,(count[6]+count[9]-1)/2+1);
		}
		else{
			max=MAX(max,count[i]);
		}
	}
	printf("%d",max);
}