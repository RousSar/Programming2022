#include <math.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, V, Sb, Sp;
	printf("����: ");
	scanf_s("%d", &a);
	V = pow(a, 3);
	Sp = 6 * pow(a, 2);
	Sb = 4 * pow(a, 2);
	printf("����� = %d\n", V);
	printf("������� ������ ����������� = %d\n", Sp);
	printf("������� ������� ����������� = %d\n", Sb);
}