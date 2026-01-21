#include <stdio.h>
int main() {
	int a, b,c,d;
	scanf("%d %d", &a, &b);
	c = a*b;
	d = b % 10;
	printf("%d\n", a*d);
	b = b / 10;
	d = b % 10;
	printf("%d\n", a*d);
	b = b / 10;
	d = b % 10;
	printf("%d\n", a*d);
	printf("%d", c);
	return 0;
}