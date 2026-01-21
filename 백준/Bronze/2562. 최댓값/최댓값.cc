#include <stdio.h>

int main(){
	int t,z,x=-1111111,y=0;
	for(int i=0;i<9;i++){
		scanf("%d",&z);
		if(z>x) {
		x=z;
		t=i+1;	
		}
	}
	printf("%d\n%d",x,t);
}