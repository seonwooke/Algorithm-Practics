#include <stdio.h>
/*
문제 : 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
	   예를 들어, 서로 다른 9개의 자연수 3, 29, 38, 12, 57, 74, 40, 85, 61 이 주어지면,
	   이들 중 최댓값은 85이고, 이 값은 8번째 수이다.
입력 : 첫째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다. 주어지는 자연수는 100 보다 작다.
출력 : 첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.
방법 : 
	1) for문을 사용하여 9개의 정수를 입력 받아 배열에 넣는다. 
	2) max 값을 0으로 설정한 후, for문을 돌면서 배열 안의 값과 서로 비교를 한다.
	3) 비교를 하면서 만약 값이 더 클 경우 해당 index 값을 저장한다.
*/
int main ()
{
	int N[9] ;
	for (int i = 0 ; i < 9 ; i++) {
		scanf ("%d", &N[i]) ;
	}

	int max = 0 ;
	int index = 0 ;
	for (int i = 0 ; i < 9 ; i++) {
		if (N[i] > max) {
			max = N[i] ;
			index = i ;
		}
	}
	printf ("%d\n%d\n", max, index+1) ;

	return 0 ;
}
