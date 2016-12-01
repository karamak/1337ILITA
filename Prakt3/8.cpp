// ConsoleApplication30.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>

int main()
{
	char str[255];
	printf("Enter the string: ");
	gets_s(str);

	int n = 0;
	printf("Enter the number of word: ");
	scanf_s("%i", &n);

	int word = 0;
	for (int i = 0; i < 255; ++i)
	{
		if (str[i] == '\0') break;
		if (str[i] != ' ')
		{
			++word;
			while (str[i] != ' ' && str[i] != '\0' && i < 255)
			{
				if (n == word)
					putchar(str[i]);
				++i;
			}

			if (str[i] == '\0') break;
		}
	}

	if (n>word || n<0)
		printf("The number of word is incorrect!");

	_getch();
	return 0;
}

