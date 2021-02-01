#include <stdio.h>

int main() {
	int i ;

	scanf("%d", &i) ;
	if (!((i >= 0)&&(i<=100))){
		printf("다시 입력해주세요.\n") ;
	}
	else if ((i >= 90)&&(i <= 100)){
		printf("A\n") ;
	}
	else if ((i >= 80)&&(i <= 89)){
		printf("B\n") ;
	}
	else if ((i >= 70)&&(i <= 79)){
		printf("C\n") ;
	}
	else if ((i >= 60)&&(i <= 69)){
		printf("D\n") ;
	}
	else {
		printf("F\n") ;
	}

	return 0 ;
}
