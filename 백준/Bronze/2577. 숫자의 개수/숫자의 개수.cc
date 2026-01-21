#include <stdio.h>

int main(){
	int a,b,c,d,arr[10]={0};
	scanf("%d %d %d",&a,&b,&c);
	d=a*b*c;
	while(d!=0){
		arr[d%10]++;
		d=d/10;
	}
	for(int i=0;i<10;i++){
		printf("%d\n",arr[i]);
	}
}