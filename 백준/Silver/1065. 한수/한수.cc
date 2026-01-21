#include <stdio.h>

int main(){
	int n,arr[4]={0},count=0,j,sum=0;
	scanf("%d",&n);
	for(int i=1;i<n+1;i++){
		j=i;
		while(j!=0){
			arr[count]=j%10;
			j=j/10;
			count++;
		}
		if(count==1 || count==2) sum++;
		else if(count==3 && arr[1]-arr[0] == arr[2]-arr[1]) sum++;
		else if(count==4 && arr[1]-arr[0] == arr[2]-arr[1] && arr[2]-arr[1] == arr[3]-arr[2]) sum++;
		count=0;
	}
	printf("%d",sum);
}