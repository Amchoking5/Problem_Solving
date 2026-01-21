#include <iostream>
int main() {
	int a;
	int c, d;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d,%d", &c, &d);
		printf("%d\n", c + d);
	}
}