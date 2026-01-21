#include <stdio.h>

int note[8];
bool ascending=true,descending=true;

int main(){
	for(int i=0;i<8;i++){
		scanf("%d",&note[i]);
	}
	for(int i=0;i<8;i++){
		if(note[i]!=i+1){
			ascending=false;
		}
		if(note[i]!=8-i){
			descending=false;
		}
	}
	
	if(ascending){
		printf("ascending");
	}
	else if(descending){
		printf("descending");
	}
	else{
		printf("mixed");
	}

	
}