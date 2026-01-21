#include <stdio.h>
int main() {
	int a, b, c,d;
	scanf("%d %d %d %d", &a, &b, &c,&d);
	c = c + d;
	b = b + (c / 60);
	c = c % 60;
	a = a + (b / 60);
	b = b % 60;
	a = a % 24;
	printf("%d %d %d", a, b, c);
	return 0;
}