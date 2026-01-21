#include <stdio.h>

int main(){
	int n,a,b;
	scanf("%d",&n);
	for(int i=0;i<10000;i++){
		if(i*(i+1)/2<n && (i+1)*(i+2)/2>=n){
			a=i+2;
			if(a%2==1){
				b=(i+1)*(i+2)/2-n+1;
				printf("%d/%d",a-b,b);
			}
			else {
				b=(i+1)*(i+2)/2-n+1;
				printf("%d/%d",b,a-b);
			}
			
			break;
		}
	}
}