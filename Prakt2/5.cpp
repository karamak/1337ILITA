// ConsoleApplication17.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	const char alphabet[] = { '0','1','2','3','4','5','6','7','8','9',
		'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
		'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	const int alphabetLen = sizeof(alphabet) / sizeof(alphabet[0]);
	const int passLen = 8;
	char c[10][passLen + 1];

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < passLen; ++j)
			c[i][j] = alphabet[rand() % alphabetLen];
		c[i][passLen] = '\0';
		printf(c[i]);
		printf("\n");
	}

	_getch();
	return 0;
}
