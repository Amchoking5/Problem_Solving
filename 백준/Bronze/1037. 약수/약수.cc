#include <stdio.h>

int lcm(int a,int b)
{
    int i,j;
    int temp;
    j = (a>b)?a:b;
    for(i=j;;i++) {
        if(i%a==0 && i%b==0){
            temp = i;
            break;
        }
    }
    return temp;
}

int main(){
	int n,a,b=1,min=99999999,check=0;
	int nums[51]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		b=lcm(b,a);
		nums[i]=a;
		if(min>a) min=a;
	}
	for(int i=0;i<n;i++){
		if(nums[i]%min!=0){
			check++;
			break;
		}
	}
	if(check==0){
		printf("%d",b*min);
	}
	else{
		printf("%d",b);
	}
}