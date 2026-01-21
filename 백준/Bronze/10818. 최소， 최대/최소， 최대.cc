#include <stdio.h>

int main(){
	int t,z,x=-1111111,y=1111111;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&z);
		if(z>x) x=z;
		if(z<y) y=z;
	}
	printf("%d %d",y,x);
}