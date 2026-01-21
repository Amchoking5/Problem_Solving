#include <stdio.h>

int main(){
	long long int x1,x2,x3,x4,y1,y2,y3,y4;
	scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
	scanf("%lld %lld %lld %lld",&x3,&y3,&x4,&y4);
	long long int s1,s2,s3,s4;
	s1=(x1*y2+x2*y3+x3*y1)-(x2*y1+x3*y2+x1*y3);
	s2=(x1*y2+x2*y4+x4*y1)-(x2*y1+x4*y2+x1*y4);
	s3=(x3*y4+x4*y1+x1*y3)-(x4*y3+x1*y4+x3*y1);
	s4=(x3*y4+x4*y2+x2*y3)-(x4*y3+x2*y4+x3*y2);
	
	if((s1>0 && s2>0) || (s1<0 && s2<0) || (s3>0 && s4>0) || (s3<0 && s4<0)){
		printf("0");
	}
	else{
		printf("1");
	}
}