#include <stdio.h>

/*
1. 정수 n을 입력받는다.
2. n줄 만큼 1부터 n까지 차례대로 출력한다.
*/

int main() {
	int n, i ;

	scanf("%d", &n) ;
	if (!(n <= 100000))
		return 0 ;

	for (i = 1 ; i <= n ; i++)
		printf("%d\n", i) ;

	return 0 ;
}
