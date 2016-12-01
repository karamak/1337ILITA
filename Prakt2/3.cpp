// ConsoleApplication15.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>

int main()
{
	unsigned int str = 0;

	printf("Enter the number of strings of *:\n");
	scanf_s("%u", &str);
	scanf_s("%*[^\n]");

	for (int i = 0; i < str; ++i)
	{
		printf("%*s", str - i, "");
		for (int j = 0; j < 2 * i + 1; ++j)
			putchar('*');
		putchar('\n');
	}

	_getch();
	return 0;
}

