#include <stdio.h>

/*
1. 테스트 케이스의 갯수인 T를 입력 받는다.
2. T만큼 반복하여 정수 2개씩 입력 받는다.
3. for문을 돌 때마다 덧셈의 결과를 출력한다.
*/

int main() {
	int T, A, B, i ;

	scanf("%d", &T) ;

	for (i = 1 ; i <= T ; i++) {
		scanf("%d %d", &A, &B) ;
		if (!((A > 0) && (B > 0)))
			return 0 ;
		printf("Case #%d: %d\n", i, A+B) ;
	}

	return 0 ;
}
