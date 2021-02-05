#include <stdio.h>
/*
1. 문제 : 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
2. 입력 : 입력은 여러 개의 테스트 케이스로 이루어져 있다.
		  각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
3. 출력 : 각 테스트 케이스마다 A+B를 출력한다.
4. 방법 :
	1) EOF(End Of File)을 사용하여 입력이 끝나면 while문이 종료되도록 한다.
*/
int main ()
{
	int A = 0, B = 0 ;

	while (scanf ("%d %d", &A, &B) != EOF) {
		printf ("%d\n", A+B) ;
	}

	return 0 ;
}
