#include <stdio.h>

/*
1. 정수N개로 이루어진 수열A와 정수X가 주어진다.
   A에서 X보다 작은 수를 모두 출력한다.
2. N과 X를 입력받는다.
3. N개 만큼의 수열A를 입력받는다.
*/

int main() {
	int N, X, A ;
	int i ;	

	scanf("%d %d", &N, &X) ;
	if (!((N >= 1) && (X <= 10000)))
		return 1 ;

	for (i = 0 ; i < N ; i++) {
		scanf("%d", &A) ;
		if (A < X) {
			printf("%d ", A) ;
		}
	}	

	return 0 ;
}
