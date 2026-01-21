#include <stdio.h>

int q[50000]={0};
int len=0;
bool w[50000]={false,};

int main(){
	int n,m,chu,ball;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&chu);
		
		int check=len;
		for(int j=0;j<check;j++){
			if(!w[q[j]+chu]){
				q[len]=q[j]+chu;
				w[q[j]+chu]=true;
				len++;
			}
			if(!w[q[j]-chu]){
				q[len]=q[j]-chu;
				w[q[j]-chu]=true;
				len++;
			}
		}
		
		if(!w[20000+chu]){
			w[20000+chu]=true;
			q[len]=20000+chu;
			len++;
		}
		
		if(!w[20000-chu]){
			w[20000-chu]=true;
			q[len]=20000-chu;
			len++;
		}
		

		
	}
	
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&ball);
		if(ball>15001){
			printf("N ");
		}
		else{
			if(w[20000+ball]){
				printf("Y ");
			}
			else{
				printf("N ");
			}	
		}
		
	}

}