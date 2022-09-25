#include <math.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, V, Sb, Sp;
	printf("Ввод: ");
	scanf_s("%d", &a);
	V = pow(a, 3);
	Sp = 6 * pow(a, 2);
	Sb = 4 * pow(a, 2);
	printf("Объем = %d\n", V);
	printf("Площадь полной поверхности = %d\n", Sp);
	printf("Площадь боковой поверхности = %d\n", Sb);
}