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
	printf("������� ����� ����������� �� %d �� %d \n", min, max);
	printf("������� ����� A: ");
	scanf_s("%d", &A);
	printf("������� ����� B: ");
	scanf_s("%d", &B);

	if (A < B) {
		if (A < min) {
			printf("�������� ����: ����� � �� ����������� �������");
		}
		else if (B > max) {
			printf("�������� ����: ����� B �� ����������� �������");
		}
		else {
			dlin = abs(A) + abs(B);
			printf("���������: %d", dlin);
		}
	}
	else {
		printf("�������� ����: ����� � ������ ���� ����� �");
	}

	return 0;
}