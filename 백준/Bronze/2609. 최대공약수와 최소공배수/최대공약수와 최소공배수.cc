#include <stdio.h>
int main() {
	int a, b, c, e=0, i;
	scanf("%d %d", &a, &b);
	if (a < b){
		c = a;
		a = b;
		b = c;
	}
	for (i = 1; i <= b; i++){
		if (a%i == 0 && b%i == 0) e = i;
	}
	a = a / e;
	b = b / e;
	printf("%d\n%d",e,e*a*b);
	return 0;
}