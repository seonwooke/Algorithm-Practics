#include <stdio.h>

/*
1. 임의의 수 n을 입력받는다.
2. 1부터 n까지 for문을 사용하여 전부 더한다.
*/

int main() {
	int n, i ;
	int sum = 0 ;

	scanf("%d", &n) ;
	if (!((0 <= n) && (n <= 10000)))
		return 1 ;

	for (i = 1 ; i <= n ; i++) {
		sum = sum + i ;
	}
	printf("%d\n", sum) ;

	return 0;
}
