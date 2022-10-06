#include <math.h>
#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "russian");

	int Flag1 = 1, Flag2 = 1, choice, choicein;
	float a, b, r, S, P, diagonal, dlin, diametr;

	printf("Добро пожаловать!\n");
	Sleep(1000);
	system("cls");
	for (int i = 0; i < 2; i++) {
		printf("Загрузка.");
		Sleep(500);
		system("cls");
		printf("Загрузка..");
		Sleep(500);
		system("cls");
		printf("Загрузка...");
		Sleep(500);
		system("cls");
	}
	
	while (Flag1 == 1) {
		Flag1 = 0;
		Flag2 = 1;
		printf("Выберите фигуру:\n");
		printf("1. Прямоугольник.\n");
		printf("2. Треугольник.\n");
		printf("3. Круг.\n");
		printf("0. Выйти из приложения.\n");
		printf("Ввод: ");
		scanf_s("%d", &choice);
		system("cls");

		if (choice == 1) {
			printf("Введите две стороны прямоугольника: ");
			scanf_s("%f %f", &a, &b);
			system("cls");
			while (Flag2 == 1) {
				printf("Меню:\n");
				printf("1. Найти площадь прямоугольника.\n");
				printf("2. Найти периметр прямоугольника.\n");
				printf("3. Найти диагональ прямоугольника.\n");
				printf("4. Вернуться к выбору фигуры.\n");
				printf("0. Выйти.\n");
				printf("Ввод: ");
				scanf_s("%d", &choicein);
				if (choicein == 1) {
					S = a * b;
					printf("Площадь прямоугольника: %f\n", S);
					system("pause");
					system("cls");
				}
				else if (choicein == 2) {
					P = a * 2 + b * 2;
					printf("Периметр прямоугольника: %f\n", P);
					system("pause");
					system("cls");
				}
				else if (choicein == 3) {
					diagonal = sqrt(a * a + b * b);
					printf("Диагональ прямоугольника: %f\n", diagonal);
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
			printf("Введите две стороны прямоугольного треугольника: ");
			scanf_s("%f %f", &a, &b);
			system("cls");
			while (Flag2 == 1) {
				printf("Меню:\n");
				printf("1. Найти площадь треугольника.\n");
				printf("2. Найти периметр треугольника.\n");
				printf("3. Найти диагональ треугольника.\n");
				printf("4. Вернуться к выбору фигуры.\n");
				printf("0. Выйти.\n");
				printf("Ввод: ");
				scanf_s("%d", &choicein);
				if (choicein == 1) {
					S = (a * b)*0.5;
					printf("Площадь треугольника: %f\n", S);
					system("pause");
					system("cls");
				}
				else if (choicein == 2) {
					P = a + b + sqrt(a * a + b * b);
					printf("Периметр треугольника: %f\n", P);
					system("pause");
					system("cls");
				}
				else if (choicein == 3) {
					diagonal = sqrt(a * a + b * b);
					printf("Диагональ треугольника: %f\n", diagonal);
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
			printf("Введите радиус круга: ");
			scanf_s("%f", &r);
			system("cls");
			while (Flag2 == 1) {
				printf("Меню:\n");
				printf("1. Найти площадь круга.\n");
				printf("2. Найти длинну окружности круга.\n");
				printf("3. Найти диаметр круга.\n");
				printf("4. Вернуться к выбору фигуры.\n");
				printf("0. Выйти.\n");
				printf("Ввод: ");
				scanf_s("%d", &choicein);
				if (choicein == 1) {
					S = 3.14 * r * r;
					printf("Площадь круга: %f\n", S);
					system("pause");
					system("cls");
				}
				else if (choicein == 2) {
					dlin = 2 * 3.14 * r;
					printf("Длина окружности круга: %f\n", dlin);
					system("pause");
					system("cls");
				}
				else if (choicein == 3) {
					diametr = 2 * r;
					printf("Диаметр круга: %f\n", diametr);
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