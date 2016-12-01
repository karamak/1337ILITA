// ConsoleApplication32.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>

int main()
{
	char str[255];
	for (int i = 0; i < 255; ++i)
	{
		str[i] = '\0';
	}
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
			int len = 0;
			while (str[i] != ' ' && str[i] != '\0' && i < 255)
			{
				++len;
				++i;
			}

			if (n == word)
			{
				for (int j = 0; i + j < 255; ++j)
				{
					str[i - len + j] = str[i + j];
					if (str[i + j] == '\0')
					{
						break;
					}
				}
			}

			if (str[i] == '\0') break;
		}
	}

	if (n > word || n < 0)
		printf("The number of word is incorrect!");
	else
		printf(str);

	_getch();
	return 0;
}
