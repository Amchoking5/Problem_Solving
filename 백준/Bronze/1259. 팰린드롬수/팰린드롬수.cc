#include <stdio.h>
#include <string.h>

using namespace std;

char nums[100000];

int main(){
	while(1){
		scanf("%s",nums);
		if(nums[0]=='0') return 0;
		int len = strlen(nums);
		bool pelin=true;
		for(int i=0;i<len/2;i++){
			if(nums[i]!=nums[len-i-1]){
				pelin=false;
				break;
			}
		}
		if(pelin) printf("yes\n");
		else printf("no\n");
	}
}