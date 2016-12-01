// ConsoleApplication13.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <windows.h>

const float g = 9.81;
int main()
{
	float H;
	printf("Enter height:\n");
	scanf_s("%f", &H);
	scanf_s("%*[^\n]");

	float L = 0, t = 0;
	while (H - L > 0)
	{
		printf("t=%.0f s ", t);
		printf("h=%.1f m\n", H - L);
		Sleep(1000);
		L = g*t*t / 2.0F;
		++t;
	}
	printf("BABAH!!!");

	_getch();
	return 0;
}
