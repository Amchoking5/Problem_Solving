#include <stdio.h>

char outchar[200002];
int nums[100001];
int stack[100001];
int location=0,clocation=0;
int cnt=1;
bool cando=true;

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&nums[i]);
		if(location==0){
			if(cnt<=nums[i]){
				while(cnt<nums[i]){
					stack[location]=cnt;
					outchar[clocation]='+';
					location++;
					clocation++;
					cnt++;
				}
				cnt++;
				outchar[clocation]='+';
				clocation++;
				outchar[clocation]='-';
				clocation++;
			}
			else{
				cando=false;
				break;
			}
		}
		else{
			if(stack[location-1]==nums[i]){
				location--;
				stack[location]=0;
				outchar[clocation]='-';
				clocation++;
			}
			else if(cnt<=nums[i]){
				while(cnt<nums[i]){
					stack[location]=cnt;
					outchar[clocation]='+';
					location++;
					clocation++;
					cnt++;
				}
				cnt++;
				outchar[clocation]='+';
				clocation++;
				outchar[clocation]='-';
				clocation++;
			}
			else{
				cando=false;
				break;
			}
		}
	}
	
	if(!cando){
		printf("NO");
	}
	else{
		for(int i=0;i<2*n;i++){
			printf("%c\n",outchar[i]);
		}
	}
}