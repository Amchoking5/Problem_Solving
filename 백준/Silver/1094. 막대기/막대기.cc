#include <stdio.h>

using namespace std;

int main(){
	int n,i=64,count=0;
	scanf("%d",&n);
	while(i!=0){
		if(n>=i){
			n=n-i;
			count++;
		}
		if(n==0){
			printf("%d",count);
			break;
		}
		i=i/2;
	}
}