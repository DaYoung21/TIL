#include <stdio.h>

int main()
{
	char op;
	int result, x, y;

	do
	{
		printf("*****************\n");
		printf("A----Add\n");
		printf("S----Sub\n");
		printf("M----Multi\n");
		printf("D----Did\n");
		printf("Q----Quit\n");
		printf("*****************\n");

		printf("연산을 선택하시오 :");
		scanf("\n%c", &op);

		printf("두수를 공백으로 분리하여 입력하시오:");
		scanf("%d %d", &x, &y);


		if (op == 'A')
			result = x + y;
		
		if (op == 'S')
			result = x * y;
			
		if (op == 'M')
			result = x / y;
			
		if (op == 'D')
			result = x % y;
			
		if (op == 'Q')
			break;

		printf("%d\n", result);
	} while (1);

		return 0;
}
