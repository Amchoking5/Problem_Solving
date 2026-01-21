#include <stdio.h>
long long int arr[101];
long long int f(int a){
	if (arr[a] == 0){
		arr[a] = f(a - 1) + f(a - 5);
		return arr[a];
	}
	else{
		return arr[a];
	}
}
int main() {
	arr[0]=arr[1] = arr[2] = arr[3] = 1;
	arr[4] = arr[5] = 2;
	int a,b,i;
	scanf("%d", &a);
	for (i = 0; i < a; i++){
		scanf("%d", &b);
		printf("%lld\n", f(b));
	}
	return 0;
}
