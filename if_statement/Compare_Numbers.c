#include <stdio.h>

int main(){
	int x, y;

	scanf("%d %d", &x, &y);
	if (!(((x >= -10000)&&(x <= 10000))&&((y >= - 10000)&&(y <= 10000)))){
		printf("다시 입력해주세요.\n");
		return 0;
	}
	else if (x > y) {
		printf(">\n");
	}
	else if (x < y)	{
		printf("<");
	}
	else {
		printf("==");
	}

	return 0;
}
