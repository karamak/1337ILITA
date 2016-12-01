// ConsoleApplication23.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>

int main()
{
	char str[255];
	printf("Enter the string:");
	scanf_s("%254[^\r\n]", str, 255);

	int word = 0;
	for (int i = 0; i < 255; ++i)
	{
		if (str[i] == '\0') break;
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && str[i] != '\0' && i<255)
				++i;
			++word;
			if (str[i] == '\0') break;
		}
	}

	printf("%i", word);

	_getch();
	return 0;
}