#include <stdio.h>

int stack[1000001];
int index[1000001];
int printnums[1000001];
int location=0;
int n;

int main(){
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int save,loc;
		scanf("%d",&save);
		loc=location;
		for(int j=loc-1;j>=0;j--){
			if(save>stack[j]){
				location--;
				printnums[index[j]]=save;
				stack[j]=0;
				index[j]=0;
			}
			else{
				break;
			}
		}
		stack[location]=save;
		index[location]=i;
		location++;
	}
	
	for(int i=0;i<location;i++){
		printnums[index[i]]=-1;
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",printnums[i]);
	}
}