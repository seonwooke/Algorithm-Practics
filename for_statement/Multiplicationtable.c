#include <stdio.h>

/*
1. 정수를 입력 받는다.
2. for문을 이용하여 해당 정수의 9배수 까지 나타낸다.
*/

int main() {
	int N, i ;

	scanf("%d", &N) ;
	if (!((N >= 1) && (N <= 9)))
		return 1 ;

	for (i = 1 ; i < 10 ; i++) {
		printf("%d * %d = %d\n", N, i, N*i) ;
	}

	return 0 ;
}
