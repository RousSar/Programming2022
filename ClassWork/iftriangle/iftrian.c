#include <math.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");

	int AB, BC, AC;
	float S, p;

	printf("Введите 3 стороны треугольника через пробел:");
	scanf_s("%d %d %d", &AB, &BC, &AC);

	if ((AB > 0) && (BC > 0) && (AC > 0)) {
		if ((AB + BC > AC) && (AB + AC > BC) && (BC + AC > AB)) {
			p = (AB + BC + AC) * 0.5;
			S = sqrt(p * (p - AB) * (p - BC) * (p - AC));
			printf("S = %.2f \n", S);
		}
		else {
			printf("Такого треугольника не может быть \n");
		}
	}
	else {
		printf("Введены отрицательные числа или ноль\n");
	}

	return 0;
}