#include <stdio.h>
int arr[1000],a;
int fibo(int b){
	if (b > 2){
		arr[b - 1] = fibo(b - 1);
	}
	return (arr[b - 1] + arr[b - 2]) % 10007;
}
int main() {
	arr[0] = arr[1] = 1;
	scanf("%d", &a);
	printf("%d",fibo(a));
}