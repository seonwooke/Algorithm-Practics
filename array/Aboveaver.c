#include <stdio.h>
/*
문제 : 대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.
입력 : 첫째 줄에는 테스트 케이스의 개수 C가 주어진다. 둘째 줄부터 각 테스트 케이스마다 
	   학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다.
	   점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
출력 : 각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.
*/
int main ()
{
	int C ;
	scanf ("%d", &C) ;

	for (int i = 0 ; i < C ; i++) {
		float count = 0 ;
		int sum = 0 ;
		float aver = 0 ;
		int student ;
		scanf ("%d", &student) ;
		int score[student] ;
		for (int j = 0 ; j < student ; j++) {
			scanf ("%d", &score[j]) ;
			sum += score[j] ;
		}
		aver = sum / student ;
		for (int k = 0 ; k < student ; k++) {
			if (score[k] > aver) {
				count += 1 ;
			}
		}
		float percentage ;
		percentage = count / student * 100 ;
		char temp = '%' ;
		printf ("%2.3f%c\n", percentage, temp) ;
	}

	return 0 ;
}
