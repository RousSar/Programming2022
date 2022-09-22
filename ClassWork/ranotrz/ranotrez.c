#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "rus");
    srand(time(0));

	int A, B, dlin, min = -100, max = 100, rand_number1, rand_number2;

	rand_number1 = min + rand() % (max - min + 1);
	rand_number2 = min + rand() % (max - min + 1);
	if (rand_number1 > rand_number2) {
		max = rand_number1;
		min = rand_number2;
	}
	else {
		max = rand_number2;
		min = rand_number1;
	}
	printf("Отрезок имеет ограничения от %d до %d \n", min, max);
	printf("Введите точку A: ");
	scanf_s("%d", &A);
	printf("Введите точку B: ");
	scanf_s("%d", &B);

	if (A < B) {
		if (A < min) {
			printf("Неверный ввод: точка А не принадлежит отрезку");
		}
		else if (B > max) {
			printf("Неверный ввод: точка B не принадлежит отрезку");
		}
		else {
			dlin = abs(A) + abs(B);
			printf("Результат: %d", dlin);
		}
	}
	else {
		printf("Неверный ввод: точка А должна быть левее В");
	}

	return 0;
}