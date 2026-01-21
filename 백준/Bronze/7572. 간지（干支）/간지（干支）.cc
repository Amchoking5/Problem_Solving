#include <stdio.h>
int main() {
	int a, b;
	char c;
	scanf("%d", &a);
	b = a % 10-4;
	c = a % 12+61;
	if (b < 0) b = b + 10;
	if (c < 65) c = c + 12;
	printf("%c%d",c, b);
	return 0;
}