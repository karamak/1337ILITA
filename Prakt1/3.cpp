// ConsoleApplication10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>

using namespace std;
int main()
{
	unsigned int feet, inches;
	float sm;

	printf("Enter feet and inches:\n");
	scanf_s("%u%u", &feet, &inches);
	scanf_s("%*[^\n]");

	sm = (feet * 12 + inches)*2.54F;
	printf("%.1fsm", sm);

	_getch();
	return 0;
}v

