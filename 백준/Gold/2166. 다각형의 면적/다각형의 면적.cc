#include <stdio.h>

long long int space[10004][2];
int n;
long long int total=0;

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld %lld",&space[i][0],&space[i][1]);
	}
	
	long long startx = space[0][0];
	long long starty = space[0][1];
	
	
	space[n][0]=space[0][0];
	space[n][1]=space[0][1];
	
	for(int i=0;i<n;i++){
		total-= (space[i][0]-startx)*(space[i+1][1]-starty);
		total+= (space[i][1]-starty)*(space[i+1][0]-startx);
	}
	if(total<0) total=total*(-1);
	printf("%lld.",total/2);
	if(total%2==0) printf("0");
	else printf("5");
}