// ConsoleApplication21.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>

int main()
{
	char str[255];
	printf("Enter the string:");
	gets_s(str);

	for (int i = 0; i < 255; ++i)
	{
		if (str[i] == '\0') break;
		if (str[i] != ' ')
		{
			int len = 0;
			while (str[i] != ' ' && str[i] != '\0' && i < 255)
			{
				++len;
				putchar(str[i++]);
			}
			printf(" %i\n", len);
			if (str[i] == '\0') break;
		}
	}

	_getch();
	return 0;
}

