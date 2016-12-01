// ConsoleApplication14.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	unsigned int num = rand() % 100 + 1;
	unsigned int yourNum = 0;

	printf("Enter a number from 1 to 100:\n");
	while (num != yourNum)
	{
		scanf_s("%u", &yourNum);
		scanf_s("%*[^\n]");
		if (num > yourNum)
			printf("Greater\n");
		else if (num < yourNum)
			printf("Less\n");
	}
	printf("You win!!!");

	_getch();
	return 0;
}
