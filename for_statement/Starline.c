#include <stdio.h>

/*
1. 정수 N을 입력받는다.
2. 두개의 for문을 사용한다.
3. 안에 for문은 *을 찍어내고, 밖의 for문은 \n을 출력한다.
4. for문의 반복횟수가 중요한데, \n는 N번 만큼 *은 i의 횟수를 따라간다.
*/

int main() {
	int N, i, j ;

	scanf("%d", &N) ;
	if (!((1 <= N) && (N <= 100)))
		return 1 ;

	for (i = 1 ; i <= N ; i++) {
		for (j = 1 ; j <= i ; j++) {
			printf("*") ;
		}
		printf("\n") ;
	}

	return 0 ;
}
