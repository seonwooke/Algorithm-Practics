#include <stdio.h>
#include <string.h>
/*
문제 : 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을
	   작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
입력 : 첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.
출력 : 첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다.
	   단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
*/
int main()
{
	char arr[1000001] ;
	int i ;
	int alph[26] = {0} ;
	int flag, findex, max ;
	scanf ("%s", arr) ;

	int len = strlen(arr) ;
	for(i=0 ; i < len ; i++)
	{
		if('a' <= arr[i] && arr[i] <= 'z')
			arr[i] -= 'a' - 'A' ;

		alph[arr[i] - 'A'] ++ ;
	}


	flag = 1 ;
	max = alph[0] ;
	findex = 0 ;
	for(i = 1 ; i < 26 ; i++)
		if(max < alph[i])
		{
			max = alph[i] ;
			findex = i ;
		}

	for(i=0 ; i < 26 ; i++)
	{
		if(i != findex && max == alph[i])
			flag = 0 ;
	}

	if(flag == 0)
		printf("?\n") ;
	else
		printf("%c\n", findex + 'A');

	return 0 ;
}
