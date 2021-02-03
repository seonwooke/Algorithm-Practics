#include <stdio.h>

/*
1. 정수 n을 입력받는다.
2. n줄 만큼 n부터 1까지 차례대로 출력한다.
*/

int main() {
	int n, i ;

	scanf("%d", &n) ;
	if (!(n <= 100000))
		return 0 ;

	for (i = 1 ; i <= n ; n--)
		printf("%d\n", n) ;

	return 0 ;
}
