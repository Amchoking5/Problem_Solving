#include <stdio.h>
int arr[100] = {0,1,2,4};
int f(int a){
	if (arr[a] == 0){
		arr[a] = f(a - 1) + f(a - 2) + f(a - 3);
		return arr[a];
	}
	else{
		return arr[a];
	}
}
int main() {
	int a, b, i;
	scanf("%d", &a);
	for (i = 0; i < a; i++){
		scanf("%d", &b);
		printf("%d\n", f(b));
	}
	return 0;
}