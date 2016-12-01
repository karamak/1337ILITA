// ConsoleApplication16.cpp: определяет точку входа для консольного приложения.
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
	const int clen = 30;
	char c[clen + 1];
	for (int i = 0; i < clen; ++i)
		c[i] = alphabet[rand() % alphabetLen];
	c[clen] = '\0';
	printf(c);

	for (int i = 0; i < clen; ++i)
	{
		if (c[i] >= '0' && c[i] <= '9')
		{
			int groupLen = 1;
			for (int j = i + 1; j < clen; ++j)
			{
				if (c[j] >= '0' && c[j] <= '9')
					++groupLen;
				else
					break;
			}
			if (i + groupLen < clen)
				for (int j = i; j < i + groupLen; ++j)
				{
					char tmp = c[j];
					c[j] = c[i + groupLen];
					c[i + groupLen] = tmp;
				}
		}
	}
	printf("\n");
	printf(c);

	_getch();
	return 0;
}

