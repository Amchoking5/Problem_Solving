#include <stdio.h>
#include <string.h>

//48

int main(){
	int i,j;
	char a[4], b[4];
	scanf("%s %s",&a,&b);
	for(i=2;i>-1;i--){
		if(a[i]<b[i]){
			for(j=2;j>-1;j--){
				printf("%c",b[j]);
			}
		break;
		}
		else if(b[i]<a[i]){
			for(j=2;j>-1;j--){
				printf("%c",a[j]);
			}
		break;
		}
	}
}