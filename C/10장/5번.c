#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
int selection_sort(int a[]);

int main()
{
	int a[10] = { 0 };
	int result;

	srand((unsigned)time(NULL));

	for (int i = 1; i <= 100; i++)
	{
		result = rand() % 10;
		for (int j = 0; j < 10; j++)
		{
			if (result == j)
				a[j] += 1;
		}
	}
	printf("가장 많이 나온 수 = %d\n", selection_sort(a));

	return 0;
}


int selection_sort(int a[])
{
	int i, j, tmp, highest;

	highest = a[9];

	for (i = 0; i < SIZE; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			if (a[j] > highest)
				highest = j;
		}
		tmp = a[i];
		a[i] = a[highest];
		a[highest] = tmp;
	}

	return a[highest];
}
