#include <stdio.h>
/*
문제 : N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
입력 : 첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.
출력 : 입력으로 주어진 숫자 N개의 합을 출력한다.

TIP : 숫자 CHAR(0~9)는 ASCII 코드 48부터 시작한다.
*/
int main ()
{
	int N ;
	scanf ("%d", &N) ;
	if (!((1 <= N) && (N <= 100))) return 1 ;

	int sum = 0 ;
	char arr[N] ;
	scanf ("%s", &arr) ;

	for (int i = 0 ; i < N ; i++) {
		sum += arr[i] - '0' ;
	}

	printf ("%d", sum) ;

	return 0 ;
}
