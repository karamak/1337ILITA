// ConsoleApplication8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>

using namespace std;
int main()
{
	char sex;
	float growth, weight;

	printf("Enter your gender: (M/F)\n");
	scanf_s("%c", &sex);
	scanf_s("%*[^\n]");

	printf("Enter yout growth:\n");
	scanf_s("%f", &growth);
	scanf_s("%*[^\n]");

	printf("Enter your weight:\n");
	scanf_s("%f", &weight);
	scanf_s("%*[^\n]");

	growth /= 100;
	const float IMT = weight / (growth*growth);
	printf("Your IMT: %f\n", IMT);

	if (IMT <18.5)
		printf("You need to get fat");
	else if (IMT >= 18.5 && IMT < 25.0)
		printf("Normal weight");
	else
		printf("You need to lose weight");

	_getch();
	return 0;
}

