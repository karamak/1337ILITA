// ConsoleApplication18.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>

int delSpace(char *str, int di);

int main()
{
	char str[255];
	printf("Enter the string:");
	scanf_s("%254[^\r\n]", str, 255);

	for (int i = delSpace(str, 0); i < 255;)
	{
		int delta = delSpace(str, i + 1);
		if (delta == 0)
		{
			str[i] = '\0';
			break;
		}
		i += delta + 1;
	}

	printf("\n");
	printf(str);

	_getch();
	return 0;
}

int delSpace(char *str, int di) {
	for (int i = di; i < 255; ++i)
	{
		if (str[i] == '\0')
			return 0;
		if (str[i] != ' ')
		{
			for (int j = 0; i + j < 255; ++j)
			{
				if (str[i + j] == ' ' || str[i + j] == '\0')
					return j;
				char tmp = str[j + di];
				str[j + di] = str[i + j];
				str[i + j] = tmp;
			}
		}
	}
	return 0;
}
