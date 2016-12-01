// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;
int main()
{
	const int MAXSTRLEN = 80;
	char str[MAXSTRLEN];

	printf("Enter the string:\n");
	scanf_s("%s", &str, MAXSTRLEN);
	scanf_s("%*[^\n]");

	int len = strlen(str);
	int dw = (MAXSTRLEN - len) / 2 + len;
	printf("%*s\n", dw, str);

	_getch();
	return 0;
}
