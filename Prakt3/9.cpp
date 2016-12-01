// ConsoleApplication31.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>

int main()
{
	char str[255];
	for (int i = 0; i < 255; ++i)
	{
		str[i] = 0;
	}
	printf("Enter the string:");
	scanf_s("%254[^\r\n]", str, 255);

	char seqChar = 0;
	int maxSeqLen = 0;
	for (int i = 0; i < 255;)
	{
		if (str[i] == '\0') break;
		int seqLen = 0;
		char seqTmpChar = str[i];
		while (str[i] == seqTmpChar && str[i] != '\0' && i < 255) {
			++i;
			++seqLen;
		}
		if (seqLen > maxSeqLen)
		{
			maxSeqLen = seqLen;
			seqChar = seqTmpChar;
		}
	}

	for (int i = 0; i < maxSeqLen; ++i)
	{
		putchar(seqChar);
	}

	_getch();
	return 0;
}
