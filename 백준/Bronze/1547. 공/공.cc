#include <stdio.h>

int main(){
	int n,a,b,now=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a==now){
			now=b;
		}
		else if(b==now){
			now=a;
		}
	}
	printf("%d",now);
}