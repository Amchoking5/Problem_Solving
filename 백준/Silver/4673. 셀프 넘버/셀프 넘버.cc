#include <stdio.h>

int main(){
	int check[10001]={1,0};
	int newnum,j,i;
	for(i=1;i<10001;i++){
		newnum=i;
		j=i;
		if(check[i]==0) printf("%d\n",i);
		while(j!=0){
			newnum+=(j%10);
			j=j/10;
		}
		if(newnum<10001) check[newnum]=1;
	}
}