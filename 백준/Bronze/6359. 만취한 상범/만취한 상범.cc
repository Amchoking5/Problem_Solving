#include <stdio.h>
int main() {
	int a,i,b,j,c;
	scanf("%d", &a);
	for (i = 0; i < a; i++){
		scanf("%d", &b);
		for (j = 1; j*j <= b; j++){
			c = j;
		}
		printf("%d\n", c);
	}
	return 0;
}