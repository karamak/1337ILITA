// ConsoleApplication25.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	const int N = 5;
	int arr[N];

	unsigned int minI = 0, maxI = 0;
	int min = INT_MAX, max = INT_MIN;

	for (unsigned int i = 0; i < N; ++i)
	{
		arr[i] = rand() - RAND_MAX / 2;
		if (arr[i] < min)
		{
			min = arr[i];
			minI = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			maxI = i;
		}
		printf("%i ", arr[i]);
	}

	if (minI > maxI)
	{
		int tmp = minI;
		minI = maxI;
		maxI = tmp;
	}

	int sum = 0;
	for (unsigned int i = minI; i <= maxI; i++)
	{
		sum += arr[i];
	}
	printf("\n%i ", sum);

	_getch();
	return 0;
}

