// ConsoleApplication19.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>

int main()
{
	char str[255];
	printf("Enter the string:");
	scanf_s("%254[^\r\n]", str, 255);

	int freq[255];
	for (int i = 0; i < 255; ++i)
	{
		freq[i] = 0;
	}
	for (int i = 0; i < 255; ++i)
	{
		freq[str[i]]++;
	}
	for (int i = 1; i < 255; ++i)
	{
		if (freq[i] != 0)
			printf("%c %i\n", i, freq[i]);
	}


	_getch();
	return 0;
}

