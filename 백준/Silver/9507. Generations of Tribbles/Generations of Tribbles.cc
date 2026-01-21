#include <stdio.h>
long long int arr[70] = { 1, 1, 2, 4,0 };
long long int f(int a){
	if (arr[a] == 0){
		arr[a] = f(a - 1) + f(a - 2) + f(a - 3) + f(a - 4);
		return arr[a];
	}
	else return arr[a];
}
int main() {
	int a, i, b;
	scanf("%d", &a);
	for(i = 0; i < a; i++){
		scanf("%d", &b);
		printf("%lld\n", f(b));
	}
	return 0;
}