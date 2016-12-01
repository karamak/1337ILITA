// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>

using namespace std;
int main()
{
	unsigned int hours, min, sec;
	while (true) {
		printf("Enter the time: (HH:MM:SS)\n");
		scanf_s("%2u%*c%2u%*c%2u", &hours, &min, &sec);
		scanf_s("%*[^\n]");

		if ((hours >= 0 && hours < 24) && (min >= 0 && min < 60) && (sec >= 0 && sec < 60)) break;

		printf("Invalid input, enter again\n");
	}

	if (hours >= 6 && hours < 12) printf("Good morning!");
	else if (hours >= 12 && hours < 18) printf("Good afternoon!");
	else if (hours >= 18 && hours <= 24) printf("Good evening!");
	else if (hours >= 0 && hours < 6) printf("Good night!");


	_getch();
	return 0;
}

