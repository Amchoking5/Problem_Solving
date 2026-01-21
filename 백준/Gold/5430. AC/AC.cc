#include <stdio.h>
#include <string.h>

char func[100001];
char charnums[20000000];
int nums[100001];
int main(){
	int t;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++){
		
		bool error=false; 
		int lennum,countlen=0;
		int now=0;
		
		func[100001]={0};
		nums[100001]={0};
		charnums[20000000]={0};
		
		scanf("%s",func);
		scanf("%d",&lennum);
		scanf("%s",charnums);
		
		int lenfunc=strlen(func);
		
		char *ptr=strtok(charnums,",");
		while(ptr!=NULL){
			//ptr에 ,단위로 나뉘어진 문자열이 들어감
			int ptrlen=strlen(ptr);
			int sum=0;
			for(int j=0;j<ptrlen;j++){
				if(ptr[j]=='[') continue;
				else if(ptr[j]==']') continue;
				else{
					sum=sum*10+(ptr[j]-'0');
				}
			}
			nums[countlen]=sum;
			countlen++;
			ptr = strtok(NULL,",");
		}
		
		//nums[i]에 문자열로 된 값 저장 
		
		int head=0,tail=lennum;
		bool reverse=false;
		while(lenfunc>=now){
			
			if(error) break;
			
			if(func[now]=='R'){
				reverse=(!reverse);
			}
			else if(func[now]=='D'){
				if(head==tail){
					error=true;
				}
				else{
					if(reverse){
						tail--;
					}
					else{
						head++;
					}
				}
			}
			now++;
		}
		if(error){
			printf("error\n");
		}
		else{
			if(reverse){
				printf("[");
				for(int j=tail-1;j>head;j--){
					printf("%d,",nums[j]);
				}
				if(head==tail){
					printf("]\n");
				}
				else{
					printf("%d]\n",nums[head]);
				}
			}
			else{
				printf("[");
				for(int j=head;j<tail-1;j++){
					printf("%d,",nums[j]);
				}
				if(head==tail){
					printf("]\n");
				}
				else{
					printf("%d]\n",nums[tail-1]);
				}
			}
			
		}
	}
}