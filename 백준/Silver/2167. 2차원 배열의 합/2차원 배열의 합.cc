#include <stdio.h>
int main() {
	int arr[300][300] = { 0 }, i, j, k, a, b, c, d, e, sum = 0;
	scanf("%d %d", &a, &b);
	for (i = 0; i < a; i++){
		for (j = 0; j < b; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &c);
	for (i = 0; i < c; i++){
		scanf("%d %d %d %d", &a, &b,&d,&e);
		sum = 0;
		for (j = a-1; j < d; j++){
			for (k = b-1; k < e; k++){
				sum = sum + arr[j][k];
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}