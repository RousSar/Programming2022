#include <math.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");

	int A, B, dlin;

	printf("������� ����� A: ");
	scanf_s("%d", &A);
	printf("������� ����� B: ");
	scanf_s("%d", &B);

	if (A < B) {
		if (A < -10) {
			printf("�������� ����: ����� � �� ����������� �������");
		}
		else if (B > 10) {
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