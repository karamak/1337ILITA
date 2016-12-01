// ConsoleApplication24.cpp: определяет точку входа для консольного приложения.
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

	unsigned int firstNeg = 0, lastPos = 0;
	bool setFN = false;

	for (unsigned int i = 0; i < N; ++i)
	{
		arr[i] = rand() - RAND_MAX / 2;
		if (!setFN && arr[i] < 0)
		{
			setFN = !setFN;
			firstNeg = i;
		}
		else if (arr[i] >= 0)
		{
			lastPos = i;
		}
		printf("%i ", arr[i]);
	}

	if (firstNeg > lastPos)
	{
		int tmp = firstNeg;
		firstNeg = lastPos;
		lastPos = tmp;
	}

	int sum = 0;
	for (unsigned int i = firstNeg; i <= lastPos; i++)
	{
		sum += arr[i];
	}
	printf("\n%i ", sum);

	_getch();
	return 0;
}

