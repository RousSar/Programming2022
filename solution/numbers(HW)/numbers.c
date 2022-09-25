#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
	float x;
	setlocale(LC_ALL, "rus");
	printf("¬ведите число: ");
	scanf_s("%f", &x);
	system("cls");
	printf("1: %f \n", x);
	printf("2: %f \n", x + 3);
	printf("3: %f \n", x + 6);
}