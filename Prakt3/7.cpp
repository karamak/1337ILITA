// ConsoleApplication29.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>

void sort(int *a, int *k, int length);

int main()
{
	char str[255];
	printf("Enter the string:");
	scanf_s("%254[^\r\n]", str, 255);

	int key[255];
	int freq[255];
	for (int i = 0; i < 255; ++i)
	{
		freq[i] = 0;
		key[i] = i;
	}
	for (int i = 0; i < 255; ++i)
	{
		freq[str[i]]++;
	}

	sort(freq, key, 255);

	for (int i = 1; i < 255; ++i)
	{
		if (freq[i] != 0)
			printf("%c %i\n", key[i], freq[i]);
	}


	_getch();
	return 0;
}

void sort(int *a, int *k, int length)
{
	for (int i = 0; i < length - 1; i++) {
		bool swapped = false;
		for (int j = 0; j < length - i - 1; j++) {
			if (a[j] < a[j + 1]) {
				int b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
				swapped = true;

				int t = k[j];
				k[j] = k[j + 1];
				k[j + 1] = t;
			}

		}

		if (!swapped)
			break;
	}
}

