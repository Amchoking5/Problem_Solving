#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, temp=0, idx = 1, count = 0;
	int tempB=0;
	int main = 666;
	int cycle = 666;
	scanf("%d", &n);

	while (1) {
		
		if (n == 1)
		{
			printf("%d", main);
			break;
		}
		else {
			cycle = cycle + 1; // 반복문에서 계속 1씩 증가하는 숫자
			main = cycle; // 숫자를 임시 저장해 둘 main 변수

			while (main > 0) {
				tempB = main % 10; // 맨 끝자리부터 파악
				if (tempB == 6) {
					count++;
					main = main / 10; // 그 다음 자릿수 파악을 위한 나누기 10 연산
				}
				else if (count < 3){ // 3회 연속 나오지 않았을 때
					main = main / 10;
					count = 0;
				}
				else if (count >= 3) { // 3회 연속 나왔을 때
					main = main / 10;
				}
			}

			if (count >= 3) // 3회 이상 연속으로 6이 나왔을 경우
				idx = idx + 1; // n번째 영화 제목의 인덱스로 매칭
			
			count = 0;
			
			if (idx == n) { // 즉, n이 idx와 같다면
				printf("%d", cycle); // 숫자 출력 후 종료
				break;
			}
		}

	}

}