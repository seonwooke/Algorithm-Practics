#include <stdio.h>

/*
1. 두 개의 정수가 입력된다.
2. 어느 사분면에 속하는지 알아낸다.
	+ + : 1 사분면
	- + : 2 사분면
	- - : 3 사분면
	+ - : 4 사분면
3. 해당 사분면을 출력한다. 
*/

int main() {
	int x, y;

	scanf("%d %d", &x, &y) ;

	if (!((-1000 <= x) && (x != 0) && (x <= 1000))) {
		printf ("다시 입력하여 주세요.\n") ;
	}
	else if ((x > 0) && (y > 0)) {
		printf ("1\n") ;	
	}
	else if ((x < 0) && (y > 0)) {
		printf ("2\n") ;	
	}
	else if ((x < 0) && (y < 0)) {
		printf ("3\n") ;	
	}
	else {
		printf ("4\n") ;
	}

	return 0;
}
