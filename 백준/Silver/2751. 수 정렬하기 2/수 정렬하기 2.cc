#include <stdio.h>
#include <stdlib.h>

int a[1000001]={0};

int compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	qsort(a, n, sizeof(int), compare);
	
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}