#include <stdio.h>
int arr[1001],a,i;
int main() {
	scanf("%d", &a);
	arr[0] = 1;
	for (i = 1; i < a; i++){
		if (i % 2 == 0){
			arr[i]=(arr[i - 1] * 2 - 1)%10007;
		}
		if (i % 2 == 1){
			arr[i] = (arr[i - 1] * 2 + 1) % 10007;
		}
	}
	printf("%d", arr[a-1]);
}