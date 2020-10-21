#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char S[100] = { 0 };

	printf("문자열을 입력하시오:");
	gets_s(S, 100);

	for (int i = 0; S[i] != NULL; i++)
	{
		if (isupper(S[i]))
		{
			S[i] = tolower(S[i]);  //대문자 -> 소문자
		}
	}
	
}   
