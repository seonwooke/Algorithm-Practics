#include <stdio.h>

/*
1. 정수 N을 입력받는다.
2. 우측 정렬을 위해 3개의 for문을 사용해야 한다.
3. 3개의 for문은 \n를 출력하는 가장 바깥 쪽의 for문 안에 2개의 for문이 병렬형식으로 나란히 사용된다.
4. 가장 바깥쪽의 for문은 \n를 1부터 N번 출력한다.
5. 안쪽 첫번째 for문은 whitespace를 N-1부터 i만큼 출력한다.
6. 안쪽 두번째 for문은 *를 1부터 i만큼 출력한다.
*/

int main() {
	int N, i, j, q ;

	scanf("%d", &N) ;
	if (!((1 <= N) && (N <= 100)))
		return 1 ;

	for (i = 1 ; i <= N ; i++) {
		for (j = N-1 ; j >= i ; j--) {
			printf(" ") ;
		}
		for (q = 1 ; q <= i ; q++) {
			printf("*") ;
		}
		printf("\n") ;
	}

	return 0 ;
}
