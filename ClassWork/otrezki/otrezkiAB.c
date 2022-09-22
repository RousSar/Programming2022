#include <math.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");

	int A, B, dlin;

	printf("Введите точку A: ");
	scanf_s("%d", &A);
	printf("Введите точку B: ");
	scanf_s("%d", &B);

	if (A < B) {
		if (A < -10) {
			printf("Неверный ввод: точка А не принадлежит отрезку");
		}
		else if (B > 10) {
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