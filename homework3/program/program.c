#include <math.h>
#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "russian");

	int Flag1 = 1, Flag2 = 1, choice, choicein;
	float a, b, r, S, P, diagonal, dlin, diametr;

	printf("����� ����������!\n");
	Sleep(1000);
	system("cls");
	for (int i = 0; i < 2; i++) {
		printf("��������.");
		Sleep(500);
		system("cls");
		printf("��������..");
		Sleep(500);
		system("cls");
		printf("��������...");
		Sleep(500);
		system("cls");
	}
	
	while (Flag1 == 1) {
		Flag1 = 0;
		Flag2 = 1;
		printf("�������� ������:\n");
		printf("1. �������������.\n");
		printf("2. �����������.\n");
		printf("3. ����.\n");
		printf("0. ����� �� ����������.\n");
		printf("����: ");
		scanf_s("%d", &choice);
		system("cls");

		if (choice == 1) {
			printf("������� ��� ������� ��������������: ");
			scanf_s("%f %f", &a, &b);
			system("cls");
			while (Flag2 == 1) {
				printf("����:\n");
				printf("1. ����� ������� ��������������.\n");
				printf("2. ����� �������� ��������������.\n");
				printf("3. ����� ��������� ��������������.\n");
				printf("4. ��������� � ������ ������.\n");
				printf("0. �����.\n");
				printf("����: ");
				scanf_s("%d", &choicein);
				if (choicein == 1) {
					S = a * b;
					printf("������� ��������������: %f\n", S);
					system("pause");
					system("cls");
				}
				else if (choicein == 2) {
					P = a * 2 + b * 2;
					printf("�������� ��������������: %f\n", P);
					system("pause");
					system("cls");
				}
				else if (choicein == 3) {
					diagonal = sqrt(a * a + b * b);
					printf("��������� ��������������: %f\n", diagonal);
					system("pause");
					system("cls");
				}
				else if (choicein == 4) {
					Flag1 = 1;
					Flag2 = 0;
					system("cls");
				}
				else if (choicein == 0) {
					Flag2 = 0;
					system("cls");
				}
			}
		}
		else if (choice == 2) {
			printf("������� ��� ������� �������������� ������������: ");
			scanf_s("%f %f", &a, &b);
			system("cls");
			while (Flag2 == 1) {
				printf("����:\n");
				printf("1. ����� ������� ������������.\n");
				printf("2. ����� �������� ������������.\n");
				printf("3. ����� ��������� ������������.\n");
				printf("4. ��������� � ������ ������.\n");
				printf("0. �����.\n");
				printf("����: ");
				scanf_s("%d", &choicein);
				if (choicein == 1) {
					S = (a * b)*0.5;
					printf("������� ������������: %f\n", S);
					system("pause");
					system("cls");
				}
				else if (choicein == 2) {
					P = a + b + sqrt(a * a + b * b);
					printf("�������� ������������: %f\n", P);
					system("pause");
					system("cls");
				}
				else if (choicein == 3) {
					diagonal = sqrt(a * a + b * b);
					printf("��������� ������������: %f\n", diagonal);
					system("pause");
					system("cls");
				}
				else if (choicein == 4) {
					Flag1 = 1;
					Flag2 = 0;
					system("cls");
				}
				else if (choicein == 0) {
					Flag2 = 0;
					system("cls");
				}
			}
		}
		else if (choice == 3) {
			printf("������� ������ �����: ");
			scanf_s("%f", &r);
			system("cls");
			while (Flag2 == 1) {
				printf("����:\n");
				printf("1. ����� ������� �����.\n");
				printf("2. ����� ������ ���������� �����.\n");
				printf("3. ����� ������� �����.\n");
				printf("4. ��������� � ������ ������.\n");
				printf("0. �����.\n");
				printf("����: ");
				scanf_s("%d", &choicein);
				if (choicein == 1) {
					S = 3.14 * r * r;
					printf("������� �����: %f\n", S);
					system("pause");
					system("cls");
				}
				else if (choicein == 2) {
					dlin = 2 * 3.14 * r;
					printf("����� ���������� �����: %f\n", dlin);
					system("pause");
					system("cls");
				}
				else if (choicein == 3) {
					diametr = 2 * r;
					printf("������� �����: %f\n", diametr);
					system("pause");
					system("cls");
				}
				else if (choicein == 4) {
					Flag1 = 1;
					Flag2 = 0;
					system("cls");
				}
				else if (choicein == 0) {
					Flag2 = 0;
					system("cls");
				}
			}
		}
		else if (choice == 0) {
			system("cls");
			system("pause");
		}
	}
}